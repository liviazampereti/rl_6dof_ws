import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from functools import partial
from .six_dof_arm_movement_client import MoveRobotClientNode, ResetClientNode
import time
import numpy as np
import random
import math as m

class QLearningNode(Node):
    def __init__(self):
        super().__init__("q_learning")
        self.velocities = [-1.0, -0.5, 0.0, 0.5, 1.0]
        self.action_values = np.zeros((8,18,5))
        
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
            self.reward=-100
            self.done=True
            self.get_logger().info(f"Episódio finalizado por conta do robô ter atingido seus limites máximos de movimentação.")
            return [0, 0, 0, 0, 0, 0, 0, 0]
            #raise ValueError("Todos os ângulos devem estar entre 0 e 180 graus.")
        degree_angles = [(angle *180/m.pi) for angle in rad_angles]
        return [min(max(0, int(angle // 18)), 17) for angle in degree_angles]

    
    def get_velocity_indices(self, input_array, reference_array):
        return [reference_array.index(value) for value in input_array]

    def save_action_values_heatmap(action_values, episode):
        """
        Salva um heatmap dos valores de ação.
        
        - action_values: array (8, 18, 5) contendo os valores de ação.
        - episode: número do episódio para nomear o arquivo.
        """
        fig, axes = plt.subplots(8, 1, figsize=(10, 20))  # 8 subplots para cada junta
        for joint in range(8):
            ax = axes[joint]
            sns.heatmap(action_values[joint], cmap="viridis", ax=ax, annot=False)
            ax.set_title(f"Junta {joint + 1}")
            ax.set_xlabel("Ação (0 a 4)")
            ax.set_ylabel("Estado (0 a 17)")

        plt.tight_layout()
        plt.savefig(f"action_values_episode_{episode}.png")
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
        
        for episode in range(1, episodes+1):
            response = reset_client.send_request()

            rclpy.spin_until_future_complete(six_dof_arm_node, response)
            print(f"Resposta do Reset: {response.result().message}")
            state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            
            self.done = False

            self.get_logger().info(f"⚠️ Episódio {episode} - Estado inicial: {state}, Done inicial: {self.done} ⚠️")
            
            count = 0
            while not self.done:
                action = exploratory_policy()
                # Executa a ação
                future = six_dof_arm_node.send_goal(joint_names, state, action, duration, False)
                
                rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
                next_state = future.result().result.current_position
                self.done = future.result().result.done
                self.reward = future.result().result.reward
                
                next_state_idx = self.get_indices(next_state)
                state_idx = self.get_indices(state)         
                
                next_action_idx = target_policy(state_idx)
                #next_action = exploratory_policy()

                
                #next_action_idx = self.get_velocity_indices(next_action, self.velocities)
                action_idx = self.get_velocity_indices(action, self.velocities)

                #self.get_logger().info(f"Next State: {next_state_idx}    |    Next Action: {next_action_idx}")
                qsa = self.action_values[np.arange(8), state_idx, action_idx]

                next_qsa = self.action_values[np.arange(8), next_state_idx, next_action_idx]

                self.action_values[np.arange(8), state_idx, action_idx] += [alpha * (self.reward + gamma * i_next_qsa - i_qsa) for i_next_qsa, i_qsa in zip(next_qsa, qsa)]
                #self.get_logger().info(f"Action Values: {self.action_values}")
                state = next_state
                
                count +=1
                
                if count==3000:
                    self.get_logger().info(f"Episódio finalizado por ter mais de 3000 steps.")
                    pass
            if episode % 10 == 0:  # Salva a cada 10 episódios
                self.save_action_values_heatmap(self.action_values, episode)

            
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