<p align="center">

<img src=utils/reinforce_arm.png alt="Exemplo imagem">

</p>

<div align="center">

![ROS](https://img.shields.io/badge/ros-%230A0FF9.svg?style=for-the-badge&logo=ros&logoColor=white)
![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)

</div>

## Aprendizado por reforço aplicado a braço robótico em ambiente de simulação ROS

> Este projeto de TCC implementa dois algoritmos de aprendizado por reforço (Q-Learning e Deep Q-Learning) para controlar um braço robótico simulado no ambiente Gazebo com ROS 2. O objetivo é treinar o robô a realizar a tarefa de tocar o end-effector em um bloco fixo no solo. A simulação permite testar estratégias de controle inteligentes antes da implementação em robôs físicos.


<img src="utils/treinamento.gif" alt="Exemplo imagem">

## 🚀 Instalando ReinforceArm

Já havendo o ROS2 versão humble e o Gazebo versão xx.xx.xx instalados, siga os seguintes passos para instalação do ambiente:

```
> conda create -n reinfocearm python==3.10.16

> conda activate reinfocearm

> pip install -r requirements.txt
```

## ☕ Usando ReinforceArm

```
> conda activate reinforcearm

> colcon build --symlink-install

> source ~/reinforcearm/install/setup.bash

> ros2 launch sixdof_arm_bringup gazebo.launch.xml 
```
