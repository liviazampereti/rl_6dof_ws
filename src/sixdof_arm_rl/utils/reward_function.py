from sixdof_arm_rl.get_gazebo_link_state import GetGazeboModelState
import math as m

def reward_by_block_gripper_distance():

    get_state_node = GetGazeboModelState()

    gripper1_link_position = get_state_node.get_point_position("gripper1_link", (0.0, 0.17, -0.075))   
    gripper2_link_position = get_state_node.get_point_position("gripper2_link", (0.0, 0.17, -0.075))                
    box_position = get_state_node.get_point_position("unit_box", (0,0,0.05))

    if gripper1_link_position and box_position:
        distance_1 = m.sqrt((gripper1_link_position[0] - box_position[0])**2 + 
                            (gripper1_link_position[1] - box_position[1])**2 + 
                            (gripper1_link_position[2] - box_position[2])**2)
        
    if gripper2_link_position and box_position:
        distance_2 = m.sqrt((gripper2_link_position[0] - box_position[0])**2 + 
                            (gripper2_link_position[1] - box_position[1])**2 + 
                            (gripper2_link_position[2] - box_position[2])**2)
        
    distance = (distance_1+distance_2)/2

    reward = -distance
    return reward
    
'''def reward_by_block_gripper_distance():
    get_state_node = GetGazeboModelState()

    gripper1_link_position = get_state_node.get_point_position("gripper1_link", (0.0, 0.17, 0.0))   
    gripper2_link_position = get_state_node.get_point_position("gripper2_link", (0.0, 0.17, 0.0))                
    box_position = get_state_node.get_point_position("unit_box", (0, 0, 0))

    if not (gripper1_link_position and gripper2_link_position and box_position):
        return -5  # Penalidade padrão se alguma posição for inválida

    def dist(p1, p2):
        return m.sqrt((p1[0] - p2[0]) ** 2 +
                      (p1[1] + 0.18 - p2[1]) ** 2 +  # ajuste manual
                      (p1[2] - p2[2]) ** 2)

    d1 = dist(gripper1_link_position, box_position)
    d2 = dist(gripper2_link_position, box_position)
    distance = (d1 + d2) / 2  # distância média

    # Recompensa suave: bônus exponencial pela proximidade
    reward = 200 * m.exp(-10 * distance) - 5  # suaviza penais e acelera bons comportamentos

    # Recompensa extra por acerto preciso
    if distance < 0.05:
        reward += 100

    # Penalidade leve por repetição (opcional)
    return reward'''