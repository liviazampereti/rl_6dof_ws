import rclpy
from rclpy.node import Node
from gazebo_msgs.srv import GetEntityState
import numpy as np
from scipy.spatial.transform import Rotation as R

class GetGazeboModelState(Node):
    def __init__(self):
        super().__init__('get_gazebo_model_state')
        self.client = self.create_client(GetEntityState, '/gazebo/get_entity_state')

    def get_point_position(self, model_name, displacement):
        if not self.client.wait_for_service(timeout_sec=2.0):
            self.get_logger().error("Serviço /gazebo/get_entity_state não disponível.")
            return None

        request = GetEntityState.Request()
        request.name = model_name

        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        if future.result():
            state = future.result().state
            pos = state.pose.position
            quat = state.pose.orientation  # Pega a orientação em quaternion

            # Posição do centro do link no mundo
            center = np.array([pos.x, pos.y, pos.z])

            # Converte o quaternion para uma matriz de rotação
            rotation = R.from_quat([quat.x, quat.y, quat.z, quat.w])

            # Rotaciona o deslocamento
            rotated_offset = rotation.apply(displacement)

            # Calcula a posição final
            point_position = center + rotated_offset
            return tuple(point_position)
        else:
            self.get_logger().error("Erro ao obter estado do modelo.")
            return None

def main(args=None):
    rclpy.init(args=args)
    node = GetGazeboModelState()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()