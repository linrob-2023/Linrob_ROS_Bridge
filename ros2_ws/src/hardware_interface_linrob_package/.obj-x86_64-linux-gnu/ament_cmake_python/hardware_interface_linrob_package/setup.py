from setuptools import find_packages
from setuptools import setup

setup(
    name='hardware_interface_linrob_package',
    version='0.0.0',
    packages=find_packages(
        include=('hardware_interface_linrob_package', 'hardware_interface_linrob_package.*')),
)
