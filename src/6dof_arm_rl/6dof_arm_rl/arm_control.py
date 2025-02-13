import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

class RobotCommander(Node):
    def __init__(self):
        super().__init__('robot_commander')
        self.publisher = self.create_publisher(JointTrajectory, '/joint_trajectory_controller/joint_trajectory', 10)
        self.timer = self.create_timer(1.0, self.send_command)

    def send_command(self):
        msg = JointTrajectory()
        msg.joint_names = ['base_arm1_joint', 
                           'arm1_arm2_joint', 
                           'arm2_arm3_joint', 
                           'arm3_arm4_joint', 
                           'arm4_arm5_joint', 
                           'arm5_arm6_joint',
                           'arm6_gripper1_joint', 
                           'arm6_gripper2_joint']
        
        point = JointTrajectoryPoint()
        point.positions = [0.5, 0.5, -0.5, -0.5, 0.3, -0.2, 0.0, 0.0]
        point.time_from_start.sec = 2
        
        msg.points.append(point)

        self.publisher.publish(msg)
        self.get_logger().info('Comando enviado!')

def main():
    rclpy.init()
    node = RobotCommander()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()