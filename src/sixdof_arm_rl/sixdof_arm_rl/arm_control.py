import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration
import time

class RobotCommander(Node):
    def __init__(self):
        super().__init__('robot_commander')
        # Publicador para enviar os comandos
        self.publisher = self.create_publisher(JointTrajectory, '/joint_trajectory_controller/joint_trajectory', 10)
        # Timer para enviar comandos periodicamente
        self.timer = self.create_timer(4.0, self.send_command)
        
        self.current_position = [0, 0, 0, 0, 0, 0, 0, 0]

    def calculate_position(self, current_position, velocity, duration=2):
        future_position = current_position + velocity*duration
        return future_position
        
    def send_command(self):
        msg = JointTrajectory()
        # Defina os nomes das juntas conforme seu robô
        msg.joint_names = ['base_arm1_joint', 
                           'arm1_arm2_joint', 
                           'arm2_arm3_joint', 
                           'arm3_arm4_joint', 
                           'arm4_arm5_joint', 
                           'arm5_arm6_joint',
                           'arm6_gripper1_joint', 
                           'arm6_gripper2_joint']
        
        # Definir o ponto com as velocidades desejadas
        point = JointTrajectoryPoint()
        velocities = [0.08, 0.05, 0.05, 0.05, 0.5, 0.5, 0.00, 0.3]
        point.velocities = [0.08, 0.05, 0.05, 0.05, 0.5, 0.5, 0.00, 0.3]
        positions = list(map(self.calculate_position, self.current_position, velocities))
        self.get_logger().info(f"positions: {positions}")
        point.positions = positions
        # Definir o tempo de execução para o comando (2 segundos no exemplo)
        point.time_from_start = Duration(sec=2, nanosec=0)
    
        # Adicionar o ponto ao comando
        msg.points.append(point)

        # Publicar a mensagem
        self.publisher.publish(msg)
        self.get_logger().info('Comando de velocidade enviado!')
        
        time.sleep(2)
        msg = JointTrajectory()
        # Defina os nomes das juntas conforme seu robô
        msg.joint_names = ['base_arm1_joint', 
                           'arm1_arm2_joint', 
                           'arm2_arm3_joint', 
                           'arm3_arm4_joint', 
                           'arm4_arm5_joint', 
                           'arm5_arm6_joint',
                           'arm6_gripper1_joint', 
                           'arm6_gripper2_joint']
        
        # Definir o ponto com as velocidades desejadas
        point = JointTrajectoryPoint()
        #point.positions = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]  # Se não estiver enviando posições, mantenha vazio ou omita
        #point.velocities = [0.8, 0.5, -0.5, -0.5, 0.5, -0.5, 0.3, 0.3]
        
        
        point.positions = [0.5, 0.5, -0.5, -0.5, 0.3, -0.2, 0.0, 0.0]  # Posições desejadas
        point.velocities = []
        
        self.current_position = point.positions
        
        # Definir o tempo de execução para o comando (2 segundos no exemplo)
        point.time_from_start = Duration(sec=2, nanosec=0)
        
        # Adicionar o ponto ao comando
        msg.points.append(point)

        # Publicar a mensagem
        self.publisher.publish(msg)
        self.get_logger().info('Comando de posição enviado!')

def main():
    rclpy.init()
    node = RobotCommander()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
