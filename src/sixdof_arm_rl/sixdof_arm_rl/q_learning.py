import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from functools import partial
from .six_dof_arm_movement_client import MoveRobotClientNode, ResetClientNode
import time
import numpy as np
import random
from tqdm import tqdm
import math as m

class QLearningNode(Node):
    def __init__(self):
        super().__init__("q_learning")
        self.velocities = [-1.0, -0.5, 0.0, 0.5, 1.0]
        self.action_values = np.zeros((18,5,8))
        
    def target_policy(self, state_idx, epsilon=0.1):
        if np.random.rand() < epsilon:
            return random.choices(self.velocities, k=8)
        else:
            self.get_logger().info(f"ACTION_VALUES[STATE_IDX]: {self.action_values[state_idx]}")
            return np.argmax(self.action_values[:][state_idx], axis=0)
        
    def exploratory_policy(self):
        return random.choices(self.velocities, k=8)
    
    def reset_robot():
        reset_client = ResetClientNode()
        response = reset_client.send_request()

        rclpy.spin_until_future_complete(six_dof_arm_node, response)
        print(f"Resposta do Reset: {response.result().message}")
        next_position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    
    def get_indices(self, angles):
        if any(not (m.pi <= angle <= m.pi) for angle in angles):
            return [0, 0, 0, 0, 0, 0, 0, 0]
            #raise ValueError("Todos os ângulos devem estar entre 0 e 180 graus.")
        
        return [int(angle // 18) + 1 for angle in angles]
    
    def get_velocity_indices(self, input_array, reference_array):
        return [reference_array.index(value) for value in input_array]

        
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
        
        for episode in tqdm(range(1, episodes+1)):
            response = reset_client.send_request()

            rclpy.spin_until_future_complete(six_dof_arm_node, response)
            print(f"Resposta do Reset: {response.result().message}")
            state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            
            done = False

            self.get_logger().info(f"⚠️ Episódio {episode} - Estado inicial: {state}, Done inicial: {done} ⚠️")

            while not done:
                action = exploratory_policy()
                
                # Executa a ação
                future = six_dof_arm_node.send_goal(joint_names, state, action, duration, False)
                
                rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
                next_state = future.result().result.current_position
                done = future.result().result.done
                reward = future.result().result.reward
                
                next_state_idx = self.get_indices(next_state)
                state_idx = self.get_indices(state)         
                
                next_action = target_policy(state_idx)
                self.get_logger().info("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")
                self.get_logger().info(f"State Indice: {state_idx}")
                self.get_logger().info(f"Next Action: {next_action}")
                #next_action = exploratory_policy()

                
                next_action_idx = self.get_velocity_indices(next_action, self.velocities)
                action_idx = self.get_velocity_indices(action, self.velocities)

                qsa = action_values[state_idx][action_idx]
                next_qsa = action_values[next_state_idx][next_action_idx]

                action_values[state_idx][action_idx]=qsa + alpha*(reward + gamma*next_qsa - qsa)

                state = next_state


            
def main(args=None):
    rclpy.init(args=args)  # Inicializa a comunicação ROS
    q_learning_node = QLearningNode()  # Cria a instância do nó

    episodes = 100  # Número de episódios
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