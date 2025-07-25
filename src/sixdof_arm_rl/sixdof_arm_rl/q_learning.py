'''import rclpy
from rclpy.node import Node
from .six_dof_arm_movement_client import MoveRobotClientNode, ResetClientNode
import time
import numpy as np
import random
import math as m
from utils.reward_function import reward_by_block_gripper_distance
from utils.epsilon_decay import linear_epsilon_decay
from utils.utils import *
from utils.plots import *
from utils import config

seed = 42
random.seed(seed)
np.random.seed(seed)

class QLearningNode(Node):
    def __init__(self):
        super().__init__("q_learning")
               
    def q_learning(action_values,
                target_policy,
                joint_names,
                velocities,
                episodes,
                duration,
                alpha=0.1,
                gamma=0.99,
                epsilon=0.1):

        
        #Inicializando nós de movimentação e reset do robô
        six_dof_arm_node = MoveRobotClientNode()
        reset_client = ResetClientNode()
        
        #Obtendo dados de data e hora para salvar plots
        data_formatada = get_date_time()
        
        #Inicializando listas para armazenar dados de treinamento
        episode_rewards_list = []
        episode_time_list = []

        for episode in range(1, episodes+1):
            #Resetando o robô para a posição inicial
            response = reset_client.send_request()
            rclpy.spin_until_future_complete(six_dof_arm_node, response)
            state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            done = False
            reward = None
            self.get_logger().info(f"⚠️ Episódio {episode} - Estado inicial: {state}, Done inicial: {done} ⚠️")
            
            #Reiniciando variáveis de episódio
            step = 0
            reward_sum = 0
            start = time.time()
            
            #Cálculo do epsilon decay
            epsilon = linear_epsilon_decay(episode, epsilon)
            
            while not done:
                step +=1
                #Checa se ultrapassou o limite máximo de steps (3000) ou o limite de movimentação das juntas            
                reward, done = check_steps(step, 3000)
                reward, done, state = check_robot_limit(state) 
                
                #Q-Learning: Execução de ação de um step
                action = target_policy(normalize_state(state), action_values, epsilon=epsilon)
                action = get_velocity_from_indices(action, velocities)
                future = six_dof_arm_node.send_goal(joint_names, state, action, duration, False)
                
                rclpy.spin_until_future_complete(six_dof_arm_node, future)
                next_state = future.result().result.current_position
                done = future.result().result.done
                reward = future.result().result.reward

                
                #Cálculo da função recompensa por distância
                if reward==0:
                    reward = reward_by_block_gripper_distance() 
                    self.get_logger().info(f"Reward: {reward}")
                    
                state_idx = normalize_state(state)        
                next_state_idx = normalize_state(next_state)
                action_idx = get_velocity_indices(action, velocities)
                
                #Cálculo do qsa e next_qsa
                qsa = action_values[np.arange(8), state_idx, action_idx]
                next_qsa = np.argmax(action_values[np.arange(8), next_state_idx], axis=1)
                                
                for i in range(8):
                    action_values[i, state_idx[i], action_idx[i]] += alpha * (
                        reward + gamma * next_qsa[i] - qsa[i]
                    )
                    
                #Atualização do próximo estado
                state = next_state
                reward_sum += reward
                time.sleep(0.01)

            end = time.time()
            episode_time = end-start
            episode_rewards_list.append(reward_sum)
            
            episode_time_list.append(episode_time)
            save_episode_time_plot(episode_time_list, data_formatada, "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            save_rewards_plot(episode_rewards_list, data_formatada, "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            
            

def main(args=None):
    if __name__ == '__main__':
        rclpy.init(args=args)  
        q_learning_node = QLearningNode() 
        joint_names = config.joint_names
        velocities = config.velocities
        
        episodes = 3000  
        duration = 0.1   
        alpha = 0.1
        gamma = 0.99
        action_values = np.random.uniform(low=-0.01, high=0.01, size=(8, 60, 5))

        q_learning_node.q_learning(
            action_values = action_values,
            target_policy = q_learning_target_policy,
            joint_names = joint_names,
            velocities = velocities,
            episodes = episodes,
            duration = duration,
            alpha = alpha,
            gamma = gamma
        )

        rclpy.spin(q_learning_node)
        rclpy.shutdown() '''
        
import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from functools import partial
from .six_dof_arm_movement_client import MoveRobotClientNode, ResetClientNode
import matplotlib.pyplot as plt
import time
import numpy as np
import random
import math as m
import os
from .get_gazebo_link_state import GetGazeboModelState


class QLearningNode(Node):
    def __init__(self):
        super().__init__("q_learning")
        self.velocities = [-1.0, -0.5, 0.0, 0.5, 1.0]
        self.action_values = np.random.uniform(low=-0.01, high=0.01, size=(8, 60, 5)) # np.zeros((8,180,5))
        
    def target_policy(self, state_idx, epsilon=0.1):
        if np.random.rand() < epsilon:
            return self.get_velocity_indices(random.choices(self.velocities, k=8), self.velocities)
        else:
            state_idx=np.array(state_idx)
            matriz= np.array(self.action_values)
            resultado=matriz[np.arange(matriz.shape[0]), state_idx]
            #self.get_logger().info(f"Target Policy: {np.argmax(resultado, axis=1)}")
        return np.argmax(resultado, axis=1)
        
    def exploratory_policy(self):
        return random.choices(self.velocities, k=8)
    
    def reset_robot():
        reset_client = ResetClientNode()
        response = reset_client.send_request()

        rclpy.spin_until_future_complete(six_dof_arm_node, response)
        print(f"Resposta do Reset: {response.result().message}")
        next_position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    
    def get_indices(self, rad_angles):
        if any(not (-m.pi <= angle <= m.pi) for angle in rad_angles):
            self.reward = -20
            self.done=True
            self.get_logger().info(f"🟥O robô atingiu os limites máximos de movimentação. Finalização do episódio🟥")
            return [0, 0, 0, 0, 0, 0, 0, 0]
            #raise ValueError("Todos os ângulos devem estar entre 0 e 180 graus.")
        degree_angles = [int(((angle *60/m.pi)+60)/2) for angle in rad_angles]
        return degree_angles #[min(max(0, int(angle // 180)), 179) for angle in degree_angles]

    
    def get_velocity_indices(self, input_array, reference_array):
        return [reference_array.index(value) for value in input_array]
    
    def get_velocity_from_indices(self, input_array, reference_array):
        return [reference_array[value] for value in input_array]


    def save_episode_time_plot(self, episodes_time_list, save_dpath):
        
        plt.plot(np.arange(0,len(episodes_time_list),1), episodes_time_list)
        plt.title("Tempo de execução por episódio")
        plt.xlabel("Episódio")
        plt.ylabel("Tempo de execução (s)")
        plt.savefig(os.path.join(save_dpath, "tempo_por_episodio.png"))
        plt.close()
        
    def save_rewards_plot(self, episodes_rewards_list, save_dpath, window_size=10):
        plt.figure(figsize=(8, 6))
        
        # Plotando as recompensas originais
        plt.plot(np.arange(len(episodes_rewards_list)), episodes_rewards_list, label="Recompensa por Episódio", alpha=0.5)
        
        # Calculando e plotando a média móvel
        if len(episodes_rewards_list) >= window_size:
            smooth_rewards = np.convolve(episodes_rewards_list, np.ones(window_size)/window_size, mode='valid')
            plt.plot(np.arange(len(smooth_rewards)), smooth_rewards, label=f"Média Móvel ({window_size} episódios)", color="orange")
        
        plt.title("Recompensa por Episódio")
        plt.xlabel("Episódio")
        plt.ylabel("Recompensa")
        plt.legend()
        plt.grid(True)
        
        plt.savefig(os.path.join(save_dpath, "recompensa_por_episodio.png"))
        plt.close()
        
    def save_next_state_plot(self, next_state_list, save_dpath, episode):
        x = list(range(1, len(next_state_list) + 1))  # Índices fixos
        linhas = list(zip(*next_state_list))  # Transpor a matriz para obter as linhas

        # Criando o gráfico
        for i, linha in enumerate(linhas, start=1):
            plt.plot(x, linha, label=f'Link {i:02d}')
        plt.title("Next State")
        plt.xlabel("Episódio")
        plt.ylabel("Estado")
        plt.savefig(os.path.join(save_dpath, f"next_state_{episode}.png"))
        plt.close()
           
    def q_learning(self,action_values,
                exploratory_policy,
                target_policy,
                episodes,
                duration,
                alpha=0.1,
                gamma=0.99):
        joint_names= ['base_arm1_joint', 
                    'arm1_arm2_joint', 
                    'arm2_arm3_joint', 
                    'arm3_arm4_joint', 
                    'arm4_arm5_joint', 
                    'arm5_arm6_joint',
                    'arm6_gripper1_joint', 
                    'arm6_gripper2_joint'] 
        #rclpy.init(args=args) # Initialize ROS communication
        six_dof_arm_node = MoveRobotClientNode()
        reset_client = ResetClientNode()
        get_state_node = GetGazeboModelState()
        
        model_name = "arm6_link" 
        epsilon=0.1
        episode_rewards_list = []
        episode_time_list = []
        success_episodes = 0
        for episode in range(1, episodes+1):
            next_state_list = []
            response = reset_client.send_request()

            rclpy.spin_until_future_complete(six_dof_arm_node, response)
            print(f"Resposta do Reset: {response.result().message}")
            state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            
            self.done = False

            self.get_logger().info(f"⚠️ Episódio {episode} - Estado inicial: {state}, Done inicial: {self.done} ⚠️")
            
            episode_number = 0
            reward_sum = 0
            start = time.time()
            
            if episode%50==0:
                epsilon -=0.01
            while not self.done:
                action = target_policy(self.get_indices(state), epsilon=epsilon)
                action = self.get_velocity_from_indices(action, self.velocities)

                # Executa a ação
                future = six_dof_arm_node.send_goal(joint_names, state, action, duration, False)
                
                rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
                next_state = future.result().result.current_position
                self.done = future.result().result.done
                self.reward = future.result().result.reward
                episode_number +=1
                if episode_number==3000: 
                    self.get_logger().info(f"🟥 O robô excedeu o número de steps por episódio. Finalização do episódio. 🟥")
                    self.reward = -20
                    self.done=True
                
                
                gripper1_link_position = get_state_node.get_point_position("gripper1_link", (0.0, 0.17, 0.0))   
                gripper2_link_position = get_state_node.get_point_position("gripper2_link", (0.0, 0.17, 0.0))                
                box_position = get_state_node.get_point_position("unit_box", (0,0,0))
                
                if self.reward==0:
                    
                    if gripper1_link_position and box_position:
                        distance_1 = m.sqrt((gripper1_link_position[0] - box_position[0])**2 + 
                                            (gripper1_link_position[1]+0.18 - box_position[1])**2 + 
                                            (gripper1_link_position[2] - box_position[2])**2)
                        #self.get_logger().info(f"Distância: {distance:.3f} metros")
                        
                    if gripper2_link_position and box_position:
                        distance_2 = m.sqrt((gripper2_link_position[0] - box_position[0])**2 + 
                                            (gripper2_link_position[1]+0.18 - box_position[1])**2 + 
                                            (gripper2_link_position[2] - box_position[2])**2)
                        
                    distance = (distance_1+distance_2)
                    self.reward = -50*((distance/2.24))
                    
                self.get_logger().info(f"Reward: {self.reward}")
                state_idx = self.get_indices(state)        
                next_state_idx = self.get_indices(next_state)
                 
                action_idx = self.get_velocity_indices(action, self.velocities)
                next_action_idx = target_policy(next_state_idx)


                qsa = self.action_values[np.arange(8), state_idx, action_idx]
                #self.get_logger().info(f"QSA: {qsa}")

                #next_qsa = self.action_values[np.arange(8), next_state_idx, next_action_idx]
                next_qsa = np.argmax(self.action_values[np.arange(8), next_state_idx], axis=1)
                #self.get_logger().info(f"State: {state_idx}    |    Action: {action_idx}    |    Action value: {self.action_values[np.arange(8), state_idx, action_idx]}")
                
                for i in range(8):
                    self.action_values[i, state_idx[i], action_idx[i]] += alpha * (
                        self.reward + gamma * next_qsa[i] - qsa[i]
                    )
    
                #self.action_values[np.arange(8), state_idx, action_idx] = [i_qsa + alpha * (self.reward + gamma * i_next_qsa - i_qsa) for i_next_qsa, i_qsa in zip(next_qsa, qsa)]
                #self.get_logger().info(f"Action Values: {self.action_values}")
                state = next_state
                reward_sum += self.reward
                
                

                time.sleep(0.01)
                if self.reward ==200:
                    success_episodes += 1
                    
                
                
                
            end = time.time()
            episode_rewards_list.append(reward_sum)
            episode_time = end-start
            episode_time_list.append(episode_time)
            self.save_episode_time_plot(episode_time_list, "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            self.save_rewards_plot(episode_rewards_list, "/home/livia/rl_6dof_ws/src/sixdof_arm_rl/sixdof_arm_rl/plots")
            
            

def main(args=None):
    rclpy.init(args=args)  # Inicializa a comunicação ROS
    q_learning_node = QLearningNode()  # Cria a instância do nó
    
    
    episodes = 3000  # Número de episódios
    duration = 0.1   # Duração da ação
    alpha = 0.1
    gamma = 0.99

    # Chamar o algoritmo Q-Learning
    q_learning_node.q_learning(
        action_values=q_learning_node.action_values,
        exploratory_policy=q_learning_node.exploratory_policy,
        target_policy=q_learning_node.target_policy,
        episodes=episodes,
        duration=duration,
        alpha=alpha,
        gamma=gamma
    )

    rclpy.spin(q_learning_node)
    rclpy.shutdown()  # Finaliza a comunicação ROS

if __name__ == '__main__':
    main()