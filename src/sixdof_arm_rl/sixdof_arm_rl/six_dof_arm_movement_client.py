#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
from sixdof_arm_interfaces.action import MoveSixDofArm
import time
from concurrent.futures import Future
from std_srvs.srv import Trigger  

class MoveRobotClientNode(Node):
    def __init__(self):
        super().__init__("move_robot_client")
        self.move_robot_client_ = ActionClient(self, MoveSixDofArm, "move_robot")
        self.joint_names= ['base_arm1_joint', 
                  'arm1_arm2_joint', 
                  'arm2_arm3_joint', 
                  'arm3_arm4_joint', 
                  'arm4_arm5_joint', 
                  'arm5_arm6_joint',
                  'arm6_gripper1_joint', 
                  'arm6_gripper2_joint'] 
        
    def send_goal(self, joint_names, current_position, velocities, duration, reset):


        # Espera pelo servidor de ação estar disponível
        if not self.move_robot_client_.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("Action server not available!")
            return None

        # Criar um goal
        goal = MoveSixDofArm.Goal()
        goal.joint_names = joint_names
        goal.current_position = current_position
        goal.velocities = velocities
        goal.duration = duration
        goal.reset = reset


        # Enviar o goal de forma assíncrona
        future = self.move_robot_client_.send_goal_async(
            goal, feedback_callback=self.goal_feedback_callback
        )
        rclpy.spin_until_future_complete(self, future)

        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Objetivo rejeitado')
            return

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)

        self.get_logger().info(f'Reward: {result_future.result().result.reward} | Done: {result_future.result().result.done}')

        return result_future
    
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
            self.get_logger().warn("Canceled")

        self.get_logger().info(f"Result: {result.success}")


            
    def goal_feedback_callback(self, feedback_msg):
        current_position = feedback_msg.feedback.current_position
        reward = feedback_msg.feedback.reward
        done = feedback_msg.feedback.done

        self.get_logger().info(f"💛 Feedback received - Position: {current_position}, Reward: {reward}, Done: {done} 💛")

class ResetClientNode(Node):
    def __init__(self):
        super().__init__("reset_client")
        self.client = self.create_client(Trigger, "reset_robot")

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Aguardando serviço de reset...")

    def send_request(self):
        req = Trigger.Request()
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future
    
def main():
    print("Six DOF Arm Movement Client Started")
    # Código principal do cliente aqui

if __name__ == '__main__':
    main()
