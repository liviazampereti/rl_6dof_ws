import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

class ArmController(Node):
    def __init__(self):
        super().__init__('arm_controller')
        self.publisher = self.create_publisher(JointTrajectory, '/arm_controller/joint_trajectory', 10)
        self.timer = self.create_timer(2.0, self.send_command)

    def send_command(self):
        msg = JointTrajectory()
        msg.joint_names = ['base_arm1_joint', 'arm1_arm2_joint', 'arm2_arm3_joint', 'arm3_arm4_joint', 'arm4_arm5_joint', 'arm5_arm6_joint']

        point = JointTrajectoryPoint()
        point.positions = [0.0, 1.0, -1.0, 0.5, -0.5, 0.5]  # Posições desejadas para as juntas
        point.time_from_start.sec = 2  # Tempo para alcançar a posição

        msg.points.append(point)
        self.publisher.publish(msg)
        self.get_logger().info('Comando enviado para o braço!')

def main(args=None):
    rclpy.init(args=args)
    node = ArmController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()