import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/livia/rl_6dof_ws/install/sixdof_arm_rl'
