import rclpy
from rclpy.node import Node
import numpy as np
from datetime import datetime
import math as m
import random
 
    
def check_steps(actual_step, done, max_step, logger):
    if actual_step >= max_step:
        logger.info(f"🟥 O robô excedeu o número de steps por episódio. Finalização do episódio. 🟥")
        reward = -20
        done = True
        return reward, done
    return 0, done

def check_robot_limit(rad_angles, done, logger):
    if any(not (-m.pi <= angle <= m.pi) for angle in rad_angles):
        logger.info(f"🟥O robô atingiu os limites máximos de movimentação. Finalização do episódio🟥")
        reward = -100
        done=True
        state = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        return reward, done, state
    else:
        reward = 0
        done = done
        state = rad_angles
        return reward, done, state

def normalize_state(state):
    degree_angles = [int(((angle *60/m.pi)+60)/2) for angle in state]
    return degree_angles

def normalize_state_deep_q_learning(state):
    return [(stat/m.pi) for stat in state]
    
def get_velocity_indices(input_array, reference_array):
    return [reference_array.index(value) for value in input_array]

def get_velocity_from_indices(input_array, reference_array):
    return [reference_array[value] for value in input_array]

def q_learning_target_policy( action_values, state_idx, epsilon=0.1):
        if np.random.rand() < epsilon:
            return get_velocity_indices(random.choices(self.velocities, k=8), self.velocities)
        else:
            state_idx=np.array(state_idx)
            matriz= np.array(action_values)
            resultado=matriz[np.arange(matriz.shape[0]), state_idx]
        return np.argmax(resultado, axis=1)
    
def get_date_time():
    agora = datetime.now()
    data_formatada = agora.strftime("%Y_%m_%d_%H_%M_%S")
    return data_formatada
