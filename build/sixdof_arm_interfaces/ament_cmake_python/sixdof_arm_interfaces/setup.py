from setuptools import find_packages
from setuptools import setup

setup(
    name='sixdof_arm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('sixdof_arm_interfaces', 'sixdof_arm_interfaces.*')),
)
