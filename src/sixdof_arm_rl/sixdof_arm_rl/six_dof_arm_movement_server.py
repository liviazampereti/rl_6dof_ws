#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from sixdof_arm_interfaces.action import MoveSixDofArm
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration
import time
import numpy as np

class MoveRobotServerNode(Node):
    def __init__(self):
        super().__init__("move_robot_server_server")
        self.move_robot_server_ = ActionServer(
            self, 
            MoveSixDofArm, 
            "move_robot",
            #goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup())
        self.get_logger().info("Action server has been started.")
        
        self.publisher = self.create_publisher(JointTrajectory, 
                                               '/joint_trajectory_controller/joint_trajectory', 
                                               10)
    
    def calculate_next_position(self, current_position, velocity, duration=2):
        future_position = current_position + velocity*duration
        return future_position
    
    def move_robot(self, 
                   point: JointTrajectoryPoint,
                   msg: JointTrajectory,
                   joint_names,
                   current_position, 
                   velocities, 
                   duration,
                   reset):
        if reset:
            point.positions = list(np.zeros(len(joint_names)))
            point.velocities = []
            self.get_logger().info('Enviando comando de reset')
        else:
            point.positions = list(map(self.calculate_next_position, current_position, velocities, [duration] * len(current_position)))
            point.velocities = velocities
            self.get_logger().info('Enviando comando de movimentação')
        point.time_from_start = Duration(sec=int(duration), nanosec=0)
        msg.points.append(point)
        self.publisher.publish(msg)
        time.sleep(duration) 
        return point.positions
    
    def goal_callback(self, goal_request: MoveSixDofArm.Goal):
        self.get_logger().info("Received a goal.")
        # Validate de goal request
        if goal_request.target_number<=0:
            self.get_logger().info("Rejecting the goal.")
            return GoalResponse.REJECT
        self.get_logger().info("Accepting the goal.")
        return GoalResponse.ACCEPT
        
    def execute_callback(self, goal_handle: ServerGoalHandle):
        # Get request from goal
        joint_names = goal_handle.request.joint_names
        current_position = goal_handle.request.current_position
        velocities = goal_handle.request.velocities
        duration = goal_handle.request.duration
        reset = goal_handle.request.reset
        
        feedback = MoveSixDofArm.Feedback()
        result = MoveSixDofArm.Result()
        
        msg = JointTrajectory()
        msg.joint_names = joint_names
        point = JointTrajectoryPoint()
        
        if goal_handle.is_cancel_requested:
            self.get_logger().info("Canceling the goal")
            goal_handle.canceled()
            result.current_position = current_position
            return result
            
        current_position = self.move_robot(point,
                                           msg,
                                           joint_names,
                                           current_position, 
                                           velocities, 
                                           duration,
                                           reset)
        
        feedback.current_position = current_position
        goal_handle.publish_feedback(feedback)
            
        result.success = True
        goal_handle.succeed()
        return result
    
    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Received a cancel request")
        return CancelResponse.ACCEPT # or REJECT
            
        
def main(args=None):
    rclpy.init(args=args) # Initialize ROS communication
    node = MoveRobotServerNode()
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown() #Shutdown the ROS communication

if __name__ == '__main__':
    main()