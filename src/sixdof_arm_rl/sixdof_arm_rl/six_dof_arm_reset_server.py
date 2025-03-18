#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
from builtin_interfaces.msg import Duration
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import time


class ResetRobotNode(Node):
    def __init__(self):
        super().__init__("reset_robot_server")
        self.server_ = self.create_service(Trigger, "reset_robot", self.reset_robot)
        self.publisher = self.create_publisher(JointTrajectory, 
                                               '/joint_trajectory_controller/joint_trajectory', 
                                               10)
        self.reset_service = self.create_service(Trigger, "reset_robot", self.reset_robot_callback)
        
        self.get_logger().info("Add two ints server has been started")
        
        self.joint_names= ['base_arm1_joint', 
                  'arm1_arm2_joint', 
                  'arm2_arm3_joint', 
                  'arm3_arm4_joint', 
                  'arm4_arm5_joint', 
                  'arm5_arm6_joint',
                  'arm6_gripper1_joint', 
                  'arm6_gripper2_joint'] 
        
    def reset_robot(self, request, response):
        

        """ Move o robô para a posição inicial imediatamente após uma colisão """
        reset_position = [0.0] * len(self.joint_names)  # Garante que todas as juntas recebem posição zero
        reset_velocity = [0.0] * len(self.joint_names)  # Zera as velocidades

        msg = JointTrajectory()
        msg.joint_names = self.joint_names
        point = JointTrajectoryPoint()
        
        point.positions = reset_position
        point.velocities = reset_velocity  # Definir velocidades evita mensagens vazias
        point.time_from_start = Duration(sec=2, nanosec=0)

        msg.points.append(point)  # Adiciona o ponto à trajetória

        self.get_logger().info("🔄 Resetando o robô para a posição inicial 🔄")
        self.publisher.publish(msg)
        
        time.sleep(2)
        
        response.success = True
        response.message = "Robô resetado"
        return response
    
    def reset_robot_callback(self, request, response):
        """Callback que reseta o robô para a posição inicial"""
        try:
            self.reset_robot()  # Chama a função que já existe no código
            response.success = True
            response.message = "Robô resetado com sucesso!"
        except Exception as e:
            response.success = False
            response.message = f"Erro ao resetar: {str(e)}"
        return response
        
def main(args=None):
    rclpy.init(args=args) # Initialize ROS communication
    node = ResetRobotNode()
    rclpy.spin(node) 
    rclpy.shutdown() #Shutdown the ROS communication

if __name__ == '__main__':
    main()