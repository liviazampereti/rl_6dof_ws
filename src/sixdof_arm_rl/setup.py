from setuptools import find_packages, setup

package_name = 'sixdof_arm_rl'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='livia',
    maintainer_email='livia.zampereti@hotmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "arm_control = sixdof_arm_rl.arm_control:main",
            "six_dof_arm_movement_server = sixdof_arm_rl.six_dof_arm_movement_server:main",
            "six_dof_arm_movement_client = sixdof_arm_rl.six_dof_arm_movement_client:main",
            "q_learning = sixdof_arm_rl.q_learning:main"
        ],
    },
)
