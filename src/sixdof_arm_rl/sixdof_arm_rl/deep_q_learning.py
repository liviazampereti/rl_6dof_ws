import rclpy
from rclpy.node import Node
from .six_dof_arm_movement_client import MoveRobotClientNode, ResetClientNode
import time
import numpy as np
import random
from utils.plots import *
from utils.reward_function import reward_by_block_gripper_distance
from utils.replay_memory import ReplayMemory
from utils.utils import *
from utils.epsilon_decay import exponential_epsilon_decay
import copy
import torch
import torch.nn.functional as F
from torch import nn as nn
from torch.optim import AdamW
from utils import config


#Setando valores de randomizacao para permitir reprodutibilidade
seed = 42
random.seed(seed)
np.random.seed(seed)
torch.manual_seed(seed)


#Definicao da rede neural
class MultiHeadDQN(nn.Module):
    def __init__(self, state_dims, num_joints=8, num_speeds=5):
        super(MultiHeadDQN, self).__init__()
        self.state_dims = state_dims
        self.num_joints = num_joints
        self.num_speeds = num_speeds

        self.shared_fc1 = nn.Linear(state_dims, 256)
        self.shared_fc2 = nn.Linear(256, 256)
        self.heads = nn.ModuleList([
            nn.Linear(256, num_speeds) for _ in range(num_joints)
        ])

    def forward(self, x):
        x = F.relu(self.shared_fc1(x))
        x = F.relu(self.shared_fc2(x))
        

        outputs = []
        for head in self.heads:
            out = head(x)
            out = out.view(-1, self.num_speeds) 
            outputs.append(out)

        return outputs


class DeepQLearningNode(Node):
    def __init__(self):
        super().__init__("deep_q_learning")
        self.state_dims = 8
        self.velocities = [-1.0, -0.5, 0.0, 0.5, 1.0]
        self.num_actions = self.state_dims * len(self.velocities) 
        self.q_network = MultiHeadDQN(state_dims=self.state_dims)
        self.target_q_network = copy.deepcopy(self.q_network)

   
    def policy(self, state_idx, epsilon=0.2):
        if np.random.rand() < epsilon:
            chosen_velocities = get_velocity_indices(random.choices(self.velocities, k=8), self.velocities)
            return torch.tensor(chosen_velocities)
        else:
            with torch.no_grad():
                all_heads = self.q_network(torch.tensor(state_idx, dtype=torch.float32).unsqueeze(0))
                all_heads_tensor = torch.stack(all_heads, dim=0).squeeze(-2)
            action = torch.argmax(all_heads_tensor, dim=-1) 
            return action    

    def deep_q_learning(self,
                joint_names,
                velocities,
                episodes,
                duration,
                alpha=0.0001,
                batch_size=32,
                gamma=0.99,
                epsilon=0.2):

        #Inicializando nós de movimentação e reset do robô, otimizador e memória
        six_dof_arm_node = MoveRobotClientNode()
        reset_client = ResetClientNode()
        optim = AdamW(self.q_network.parameters(), lr = alpha)
        memory = ReplayMemory()
        
        #Obtendo dados de data e hora para salvar plots
        data_formatada = get_date_time()
        
        #Inicializando listas para armazenar dados de treinamento
        episode_rewards_list = []
        episode_time_list = []
        episode_loss_list = []

        for episode in range(1, episodes+1):
            #Resetando o robô para a posição inicial
            response = reset_client.send_request()
            rclpy.spin_until_future_complete(six_dof_arm_node, response)
            print(f"Resposta do Reset: {response.result().message}")
            state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            done = False
            
            self.get_logger().info(f"⚠️ Episódio {episode} - Estado inicial: {state}, Done inicial: {done} ⚠️")
            
            #Reiniciando variáveis de episódio
            step = 0
            reward_sum = 0
            loss_sum = 0
            start = time.time()
            
            #Cálculo do epsilon decay
            epsilon = exponential_epsilon_decay(episode, epsilon)    
                
            while not done:
                step+=1
                
                #Checa se ultrapassou o limite máximo de steps (3000) ou o limite de movimentação das juntas
                reward, done, state = check_robot_limit(state, done, self.get_logger())
                reward, done = check_steps(step, done, 3000, self.get_logger())
                
                if done == True:
                    continue
                
                #Deep Q-Learning: Executa ação de um step
                action= self.policy(torch.tensor(normalize_state_deep_q_learning(state)), epsilon=epsilon).squeeze().tolist()
                action = get_velocity_from_indices(action, velocities)
                future = six_dof_arm_node.send_goal(joint_names, state, action, duration, False)
                
                rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
                next_state = future.result().result.current_position
                done = future.result().result.done
                reward = future.result().result.reward
                
                #Cálculo da função recompensa por distância
                if reward==0:
                    reward = reward_by_block_gripper_distance() 

                #Inserção de dados na memória
                action = get_velocity_indices(action, velocities)
                memory.insert([torch.tensor(normalize_state_deep_q_learning(state), dtype=torch.float32).unsqueeze(0),   
                            torch.tensor(action, dtype=torch.long).unsqueeze(0),         
                            torch.tensor([reward], dtype=torch.float32),                  
                            torch.tensor([done], dtype=torch.bool),                 
                            torch.tensor(normalize_state_deep_q_learning(next_state), dtype=torch.float32).unsqueeze(0) ])
                state = next_state
                
                if memory.can_sample(batch_size):
                    #Inicializando loss
                    total_loss = 0
                    
                    #Recuperação de dados da memória
                    state_b, action_b, reward_b, done_b, next_state_b = memory.sample(batch_size)
                    
                    state_b = state_b.squeeze(1)
                    reward_b = reward_b.unsqueeze(-1)
                    done_b = done_b.unsqueeze(-1)
                    
                    #Cálculo do qsa e do target next qsa
                    all_heads_qsa_b = self.q_network(state_b) 
                    all_heads_qsa_b = torch.stack(all_heads_qsa_b, dim=0).squeeze(-2).swapaxes(0,1)
                    all_heads_target_next_qsa = self.target_q_network(next_state_b)  
                    all_heads_target_next_qsa = torch.stack(all_heads_target_next_qsa, dim=0).squeeze(-2).swapaxes(0,1)
                    
                    qsa_b = all_heads_qsa_b.gather(2, action_b.unsqueeze(-1))
                    next_qsa_b = all_heads_target_next_qsa
                    next_qsa_b = torch.max(next_qsa_b, dim=-1)[0]
                    
                    #Cálculo do target_b
                    target_b = reward_b.expand(-1, 8) + ~done_b.expand(-1, 8) * gamma * next_qsa_b.squeeze(-1)
                    
                    #Cálculo da loss
                    loss = F.mse_loss(qsa_b.squeeze(-1), target_b)
                    total_loss += loss
                    

                    #Atualização de gradiente da q_network
                    self.q_network.zero_grad()
                    total_loss.backward()
                    optim.step()
                    
                    loss_sum += total_loss.item()
                reward_sum += reward
                self.get_logger().info(f"R: {round(reward,2)}")
                
                
                time.sleep(0.01)


            #Atualização da target_q_network
            if episode % 10 == 0:
                self.target_q_network.load_state_dict(self.q_network.state_dict())
                    
            end = time.time()
            episode_time = end-start
            
            #Geração de gráficos para análise
            episode_rewards_list.append(reward_sum)
            episode_loss_list.append(loss_sum)
            episode_time_list.append(episode_time)
            save_episode_time_plot(episode_time_list, data_formatada, 
                                   "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            save_rewards_plot(episode_rewards_list, data_formatada, 
                              "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            save_log_loss_plot(episode_loss_list, data_formatada, 
                               "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            
            

def main(args=None):
    rclpy.init(args=args)  # Inicializa a comunicação ROS
    deep_q_learning_node = DeepQLearningNode()  # Cria a instância do nó
    joint_names = config.joint_names
    velocities = config.velocities
    
    episodes = 3500  # Número de episódios
    duration = 0.1   # Duração da ação

    # Chamar o algoritmo Q-Learning
    deep_q_learning_node.deep_q_learning(
        joint_names,
        velocities,
        episodes,
        duration,
        alpha=0.001,
        batch_size=64,
        gamma=0.99,
        epsilon=0.1
    )
    
    rclpy.spin(deep_q_learning_node)
    rclpy.shutdown()  # Finaliza a comunicação ROS


if __name__ == '__main__':
    main()