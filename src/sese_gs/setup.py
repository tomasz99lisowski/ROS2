from setuptools import find_packages, setup

package_name = 'sese_gs'

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
    maintainer='tomasz',
    maintainer_email='tomasz.lisowski99@gmail.com',
    description='Package for transmitting data from px4 to rviz2',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'transmit_north = sese_gs.gs_north_transmiter:main',
            'transmit_force = sese_gs.gs_net_force:main',
            'transmit_battery = sese_gs.gs_battery_transmiter:main',
            'public_battery = sese_gs.gs_batt_trial:main',
            'public_north = sese_gs.gs_north_trial:main',
        ],
    },
)
