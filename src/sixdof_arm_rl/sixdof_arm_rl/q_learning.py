import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from functools import partial
from .six_dof_arm_movement_client import MoveRobotClientNode, ResetClientNode
import time
import numpy as np
import random
from tqdm import tqdm


class QLearningNode(Node):
    def __init__(self):
        super().__init__("q_learning")
        self.velocities = [-1.0, -0.5, 0.0, 0.5, 1.0]
        self.action_values = np.zeros((18,5,8))
        
    def target_policy(self):
        pass
        
    def exploratory_policy(self):
        return random.choices(self.velocities, k=8)
    
    def reset_robot():
        reset_client = ResetClientNode()
        response = reset_client.send_request()

        rclpy.spin_until_future_complete(six_dof_arm_node, response)
        print(f"Resposta do Reset: {response.result().message}")
        next_position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    
    def get_indices(self, angles):
        if any(not (0 <= angle <= 180) for angle in angles):
            raise ValueError("Todos os ângulos devem estar entre 0 e 180 graus.")
        
        return [int(angle // 18) + 1 for angle in angles]

    def q_learning(self, action_values,
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
        rclpy.init(args=args) # Initialize ROS communication
        six_dof_arm_node = MoveRobotClientNode()
        reset_client = ResetClientNode()
        
        for episode in tqdm(range(1, episodes+1)):
            response = reset_client.send_request()

            rclpy.spin_until_future_complete(six_dof_arm_node, response)
            print(f"Resposta do Reset: {response.result().message}")
            state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            
            done = False

            while not done:
                action = exploratory_policy()
                
                # Executa a ação
                future = six_dof_arm_node.send_goal(joint_names, state, action, duration, False)
                rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
                next_state = self.get_indices(future.result().result.current_position)
                done = future.result().result.done
                reward = future.result().result.reward
                

                next_action = target_policy(next_state)
                

                qsa = action_values[state][action]
                next_qsa = action_values[next_state][next_action]

                action_values[state][action]=qsa + alpha*(reward + gamma*next_qsa - qsa)

                state = next_state
                
            
def main(args=None):
    rclpy.init(args=args) # Initialize ROS communication
    six_dof_arm_node = MoveRobotClientNode()
    reset_client = ResetClientNode()
    time.sleep(5)
    
    joint_names= ['base_arm1_joint', 
                  'arm1_arm2_joint', 
                  'arm2_arm3_joint', 
                  'arm3_arm4_joint', 
                  'arm4_arm5_joint', 
                  'arm5_arm6_joint',
                  'arm6_gripper1_joint', 
                  'arm6_gripper2_joint']    
    
    
    # Reset robot.
    duration=  2.0
    current_position= [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    velocities= [-0.15, 0.30, 0.0, -0.3, 0.0, 0.0, 0.0, 0.0]
    reset = False

    future = six_dof_arm_node.send_goal(joint_names, current_position, velocities, duration, reset)
    rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
    next_position = future.result().result.current_position
    done = future.result().result.done
    if done:
        response = reset_client.send_request()

        rclpy.spin_until_future_complete(six_dof_arm_node, response)
        print(f"Resposta do Reset: {response.result().message}")
        next_position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

        
    velocities = [0.08, 0.05, 0.05, 0.05, 0.5, 0.5, 0.00, 0.3]

    future = six_dof_arm_node.send_goal(joint_names, next_position, velocities, duration, reset)
    rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
    next_position = future.result().result.current_position
    done = future.result().result.done
    if done:
        response = reset_client.send_request()

        rclpy.spin_until_future_complete(six_dof_arm_node, response)
        print(f"Resposta do Reset: {response.result().message}")
        next_position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

    velocities = [0.08, 0.5, 0.05, 0.05, 0.5, 0.5, 0.00, 0.3]

    future = six_dof_arm_node.send_goal(joint_names, next_position, velocities, duration, reset)
    rclpy.spin_until_future_complete(six_dof_arm_node, future)  # Aguarda a ação terminar
    next_position = future.result().result.current_position
    done = future.result().result.done
    if done:
        response = reset_client.send_request()

        rclpy.spin_until_future_complete(six_dof_arm_node, response)
        print(f"Resposta do Reset: {response.result().message}")
        next_position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

    rclpy.spin(six_dof_arm_node) 
    rclpy.shutdown() #Shutdown the ROS communication

if __name__ == '__main__':
    main()