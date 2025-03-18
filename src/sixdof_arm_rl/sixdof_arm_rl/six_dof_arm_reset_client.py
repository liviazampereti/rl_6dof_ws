#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial
from std_srvs.srv import Trigger


class ResetRobotClientNode(Node):
    def __init__(self):
        super().__init__("reset_robot_client")
        self.call_reset_robot_server()
        
    def call_reset_robot_server(self):
        client = self.create_client(Trigger, "reset_robot")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Wainting for Reset Robot Server...")
        
        request = Trigger.Request()

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_reset_robot))
        
    def callback_reset_robot(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Reset Success:{str(response.message)}")
        except Exception as e:
            self.get_logger().error("Service call failed %r", (e,))

        
def main(args=None):
    rclpy.init(args=args) # Initialize ROS communication
    node = ResetRobotClientNode()
    rclpy.spin(node) 
    rclpy.shutdown() #Shutdown the ROS communication

if __name__ == '__main__':
    main()