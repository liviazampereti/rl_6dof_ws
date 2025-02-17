#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
from sixdof_arm_interfaces.action import MoveSixDofArm
import time


class MoveRobotClientNode(Node):
    def __init__(self):
        super().__init__("move_robot_client")
        self.move_robot_client_=ActionClient(self, MoveSixDofArm, "move_robot")
        
    def send_goal(self, joint_names, current_position, velocities, duration, reset):
        self.get_logger().info("Sending goal")
        # Wait for the server
        self.move_robot_client_.wait_for_server()
        
        # Create a goal
        goal = MoveSixDofArm.Goal()
        goal.joint_names = joint_names
        goal.current_position = current_position
        goal.velocities = velocities
        goal.duration = duration
        goal.reset = reset
        
        # Send the goal
        self.get_logger().info("Sending goal")
        self.move_robot_client_. \
            send_goal_async(goal, feedback_callback=self.goal_feedback_callback). \
                add_done_callback(self.goal_response_callback)
        
    def cancel_goal(self):
        self.get_logger().info("Send a cancel request")
        self.goal_handle_.cancel_goal_async()
        self.timer_.cancel()
        
    def goal_response_callback(self, future):
        self.goal_handle_: ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("Goal got accepted.")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback)
        else:
            self.get_logger().warn("Goal got rejected")
            
    def goal_result_callback(self, future):
        status = future.result().status        
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Success!")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("Aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().warn("Canceledd")
        self.get_logger().info(f"Result: {result.success}")
        
    def goal_feedback_callback(self, feedback_msg):
        current_position = feedback_msg.feedback.current_position
        self.get_logger().info(f"Success: {current_position}")
 
def main(args=None):
    rclpy.init(args=args) # Initialize ROS communication
    node = MoveRobotClientNode()
    time.sleep(10)
    duration=  2.0
    joint_names= ['base_arm1_joint', 
                  'arm1_arm2_joint', 
                  'arm2_arm3_joint', 
                  'arm3_arm4_joint', 
                  'arm4_arm5_joint', 
                  'arm5_arm6_joint',
                  'arm6_gripper1_joint', 
                  'arm6_gripper2_joint']
    
    current_position= [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    velocities= [0.08, 0.05, 0.05, 0.05, 0.5, 0.5, 0.00, 0.3]
    reset = False
    node.send_goal(joint_names, current_position, velocities, duration, reset)
    
    time.sleep(4)
    
    current_position= []
    velocities= []
    reset = True
    node.send_goal(joint_names, current_position, velocities, duration, reset)
    
    
    rclpy.spin(node) 
    rclpy.shutdown() #Shutdown the ROS communication

if __name__ == '__main__':
    main()
    