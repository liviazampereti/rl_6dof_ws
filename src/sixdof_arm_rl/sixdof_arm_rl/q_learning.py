import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from functools import partial
from .six_dof_arm_movement_client import MoveRobotClientNode
import time

class QLearningNode(Node):
    def __init__(self):
        super().__init__("py_test")
        self.counter_ = 0
        self.get_logger().info('Hello ROS2')
        self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        self.counter_ += 1
        self.get_logger().info(f'Hello {self.counter_}!!!!!!')
        
        
def main(args=None):
    rclpy.init(args=args) # Initialize ROS communication
    six_dof_arm_node = MoveRobotClientNode()
    time.sleep(10)
    
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
    velocities= [0.08, 0.8, 0.05, 0.05, 0.5, 0.5, 0.00, 0.3]
    reset = False
    six_dof_arm_node.send_goal(joint_names, current_position, velocities, duration, reset)
    
    time.sleep(4)
    
    duration = 5.0
    current_position= []
    velocities= []
    reset = True
    six_dof_arm_node.send_goal(joint_names, current_position, velocities, duration, reset)
    rclpy.spin(six_dof_arm_node) 
    rclpy.shutdown() #Shutdown the ROS communication

if __name__ == '__main__':
    main()