import sys
if sys.prefix == '/home/livia/anaconda3/envs/rl_sixdof_env':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/livia/rl_6dof_ws/install/sixdof_arm_rl'
