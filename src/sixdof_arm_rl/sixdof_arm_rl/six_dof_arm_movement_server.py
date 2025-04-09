#!/usr/bin/env python3
import rclpy
import time
import threading
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from sixdof_arm_interfaces.action import MoveSixDofArm
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration
from gazebo_msgs.msg import ContactsState
import numpy as np
from functools import partial

class MoveRobotServerNode(Node):
    def __init__(self):
        super().__init__("move_robot_server")
        self.move_robot_server_ = ActionServer(
            self, 
            MoveSixDofArm, 
            "move_robot",
            cancel_callback=self.cancel_callback,
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup())
        self.get_logger().info("Action server has been started.")
        
        
        self.publisher = self.create_publisher(JointTrajectory, 
                                               '/joint_trajectory_controller/joint_trajectory', 
                                               10)
        
            
            # Estados de colisão e eventos de parada
        self.collision_detected = threading.Event()
        self.gripper1_collision = False  # Estado de colisão do gripper1
        self.gripper2_collision = False  # Estado de colisão do gripper2
        self.ground_collision = False    # Estado de colisão com o solo

        # Lista de links a serem monitorados
        self.gripper_links = [
            ("gripper1_link_bumper", "sixdof_arm::gripper1_link::gripper1_link_collision_collision", "gripper1"),
            ("gripper2_link_bumper", "sixdof_arm::gripper2_link::gripper2_link_collision_collision", "gripper2"),
        ]

        self.arm_links = [
            ("arm1_link_bumper", "sixdof_arm::arm1_link::arm1_link_collision_collision"),
            ("arm2_link_bumper", "sixdof_arm::arm2_link::arm2_link_collision_collision"),
            ("arm3_link_bumper", "sixdof_arm::arm3_link::arm3_link_collision_collision"),
            ("arm4_link_bumper", "sixdof_arm::arm4_link::arm4_link_collision_collision"),
            ("arm5_link_bumper", "sixdof_arm::arm5_link::arm5_link_collision_collision"),
            ("arm6_link_bumper", "sixdof_arm::arm6_link::arm6_link_collision_collision"),
        ]

        # Criando os subscribers para colisão dos grippers com o cubo
        for topic, collision_name, gripper_id in self.gripper_links:
            self.create_subscription(
                ContactsState, topic,
                partial(self.contact_callback, collision_name, "unit_box::link::box_collision", "gripper", gripper_id),
                10
            )

        # Criando os subscribers para colisão dos braços com o solo
        for topic, collision_name in self.arm_links:
            self.create_subscription(
                ContactsState, topic,
                partial(self.contact_callback, collision_name, "ground_plane::link::collision", "ground", None),
                10
            )

    def contact_callback(self, collision_name, contact_target, collision_type, gripper_id, msg):
        """ Callback para verificar colisões """
        if self.check_collision(msg, collision_name, contact_target):
            if collision_type == "gripper":
                if gripper_id == "gripper1":
                    self.gripper1_collision = True
                elif gripper_id == "gripper2":
                    self.gripper2_collision = True
                
                # Verifica se ambos os grippers tocaram o cubo ao mesmo tempo
                if self.gripper1_collision and self.gripper2_collision:
                    self.handle_gripper_collision()

            elif collision_type == "ground":
                self.ground_collision = True
                self.handle_ground_collision()

    def check_collision(self, msg, link_name, contact_target):
        """ Verifica se o link colidiu com o cubo ou o solo """
        return any(
            (link_name in contact.collision1_name and contact_target in contact.collision2_name) or
            (link_name in contact.collision2_name and contact_target in contact.collision1_name)
            for contact in msg.states
        )

    def handle_gripper_collision(self):
        """ Ação específica para colisão dos grippers com o cubo """
        self.collision_detected.set()  # Pode ser usado para interromper a movimentação

    def handle_ground_collision(self):
        """ Ação específica para colisão de qualquer link com o solo """
        self.collision_detected.set()  # Pode ser usado para interromper a movimentação
            
        
    def calculate_next_position(self, current_position, velocity, duration=2):
        """ Calcula a próxima posição do robô """
        return current_position + velocity * duration

    def move_robot(self, point, msg, joint_names, current_position, velocities, duration, reset, goal_handle):
        """ Move o robô e monitora colisões em paralelo """
        done = False
        reward = 0
        
        self.collision_detected = threading.Event()
        self.gripper1_collision = False  # Estado de colisão do gripper1
        self.gripper2_collision = False  # Estado de colisão do gripper2
        self.ground_collision = False    # Estado de colisão com o solo

        if reset:
            point.positions = list(np.zeros(len(joint_names)))
            point.velocities = []
            #self.get_logger().info('Enviando comando de reset')
        else:
            point.positions = [position + velocity*duration for position, velocity in zip(current_position, velocities)]#list(map(self.calculate_next_position, current_position, velocities, [duration] * len(current_position)))
            point.velocities = velocities
            #self.get_logger().info('Enviando comando de movimentação')
        
        point.time_from_start = Duration(sec=int(duration), nanosec=0)
        msg.points.append(point)
        
        # Publica comando
        self.publisher.publish(msg)

        start_time = time.time()
        while time.time() - start_time < duration:
            if self.gripper1_collision== True and self.gripper2_collision==True:
                done = True
                reward = 500
                self.get_logger().info("🟩Os end effectors tocaram no cubo. Finalização de episódio.🟩")
                self.get_logger().info("Interrompendo movimentação devido a colisão.")
                break
            elif self.ground_collision==True:
                done = True
                reward = -20
                self.get_logger().info("🟥Houve colisão de um dos links com o solo. Finalização do episódio.🟥")
                self.get_logger().info("Interrompendo movimentação devido a colisão.")
                break
            #self.reset_robot(joint_names)
        
        return point.positions, reward, done

    def reset_robot_callback(self, request, response):
        try:
            self.reset_robot()  # Chama a função que já existe no código
            response.success = True
            response.message = "Robô resetado com sucesso!"
        except Exception as e:
            response.success = False
            response.message = f"Erro ao resetar: {str(e)}"
        return response
    def reset_robot(self, joint_names):
        """ Move o robô para a posição inicial imediatamente após uma colisão """
        reset_position = [0.0] * len(joint_names)  # Garante que todas as juntas recebem posição zero
        reset_velocity = [0.0] * len(joint_names)  # Zera as velocidades

        msg = JointTrajectory()
        msg.joint_names = joint_names
        point = JointTrajectoryPoint()
        
        point.positions = reset_position
        point.velocities = reset_velocity  # Definir velocidades evita mensagens vazias
        point.time_from_start = Duration(sec=1, nanosec=0)

        msg.points.append(point)  # Adiciona o ponto à trajetória

        self.get_logger().info("🔄 Resetando o robô para a posição inicial 🔄")
        self.publisher.publish(msg)
    
    def execute_callback(self, goal_handle: ServerGoalHandle):
        """ Executa o movimento do robô e verifica colisões durante a movimentação """

        joint_names = goal_handle.request.joint_names
        current_position = goal_handle.request.current_position
        velocities = goal_handle.request.velocities
        duration = goal_handle.request.duration
        reset = goal_handle.request.reset
        
        result = MoveSixDofArm.Result()
        
        msg = JointTrajectory()
        msg.joint_names = joint_names
        point = JointTrajectoryPoint()

        # Resetar flag de colisão
        self.collision_detected.clear()
        self.gripper1_collision = False
        self.gripper2_collision = False

        # Executa movimentação com monitoramento paralelo
        current_position, reward, done = self.move_robot(point, msg, joint_names, current_position, velocities, duration, reset, goal_handle)

        result.success = not done  # Se houve colisão, a movimentação não foi bem-sucedida
        result.current_position = current_position
        result.reward = reward
        result.done = done
        goal_handle.succeed()
        
        return result

    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Recebido um pedido de cancelamento")
        self.collision_detected.set()  # Força interrupção
        
        # Resetar o ambiente ao cancelar
        joint_names = goal_handle.request.joint_names
        current_position = goal_handle.request.current_position
        velocities = goal_handle.request.velocities
        duration = goal_handle.request.duration

        msg = JointTrajectory()
        msg.joint_names = joint_names
        point = JointTrajectoryPoint()

        self.get_logger().info("Resetando ambiente após cancelamento...")
        time.sleep(1)
        self.move_robot(point, msg, joint_names, current_position, velocities, 0.2, reset=True, goal_handle=goal_handle)

        return CancelResponse.ACCEPT

       
def main(args=None):
    rclpy.init(args=args)
    node = MoveRobotServerNode()
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()

if __name__ == '__main__':
    main()