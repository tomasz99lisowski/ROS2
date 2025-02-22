from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'gs_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tomasz',
    maintainer_email='tomasz.lisowski99@gmail.com',
    description='GS trial connection',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'transmit = gs_package.gs_transmiter:main',
            'publish = gs_package.gs_batt_pub:main',
            'point = gs_package.gs_point:main',
            'subscribe = gs_package.gs_batt_sub:main',
        ],
    },
)
