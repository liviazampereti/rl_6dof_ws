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
class QLearningNode(Node):
    def __init__(self):
        super().__init__("q_learning")
        self.velocities = [-1.0, -0.5, 0.0, 0.5, 1.0]
        self.action_values = np.zeros((8,180,5))
        
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
        degree_angles = [int(((angle *180/m.pi)+180)/2) for angle in rad_angles]
        return degree_angles #[min(max(0, int(angle // 180)), 179) for angle in degree_angles]

    
    def get_velocity_indices(self, input_array, reference_array):
        return [reference_array.index(value) for value in input_array]


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
            while not self.done:
                
                action = exploratory_policy()
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
                
                state_idx = self.get_indices(state)        
                next_state_idx = self.get_indices(next_state)
                 
                action_idx = self.get_velocity_indices(action, self.velocities)
                next_action_idx = target_policy(next_state_idx)


                qsa = self.action_values[np.arange(8), state_idx, action_idx]
                #self.get_logger().info(f"QSA: {qsa}")

                next_qsa = self.action_values[np.arange(8), next_state_idx, next_action_idx]
                #self.get_logger().info(f"State: {state_idx}    |    Action: {action_idx}    |    Action value: {self.action_values[np.arange(8), state_idx, action_idx]}")
                self.action_values[np.arange(8), state_idx, action_idx] = [i_qsa + alpha * (self.reward + gamma * i_next_qsa - i_qsa) for i_next_qsa, i_qsa in zip(next_qsa, qsa)]
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