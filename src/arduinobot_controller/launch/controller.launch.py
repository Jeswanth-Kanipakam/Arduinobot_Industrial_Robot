import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command, LaunchConfiguration
from launch.conditions import UnlessCondition
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    #it tells whether we are running in simulation(true) or real robot (false)
    is_sim = LaunchConfiguration("is_sim")
    
    # allows us to set is_sin when launching, with default true (simulate by default)
    is_sim_arg = DeclareLaunchArgument(
        "is_sim",
        default_value="True"
    )

    #we are building the urdf using xacro
    #it loads arduino.urdf.xacro from arduinopbot_description package
    #we force is_sim:=false inside the xacro - meaning we prepare the urdf for real hardware
    # the output is a full robot urdf description as a string
    robot_description = ParameterValue(
        Command(
            [
                "xacro ",
                os.path.join(
                    get_package_share_directory("arduinobot_description"),
                    "urdf",
                    "arduinobot.urdf.xacro",
                ),
                " is_sim:=False"
            ]
        ),
        value_type=str,
    )

    #starts robot_state_publisher node only if NOT in simulation (UnlessCondition(is_sim))
    #publishes /tf transforms and /joint_states from the urdf
    #it uses real time (use_sim_time: false)
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description,
                     "use_sim_time": False}],
        condition=UnlessCondition(is_sim),
    )

    #runs ros2_control_node which holds
    #robot_description (urdf for controllers)
    #use_sim_time: depends on wheather is_sim is true or false
    #controllers configuration (arduino_controllers.yaml) - we showed this YAML earlier
    #only runs if not in simulation
    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[
            {"robot_description": robot_description,
             "use_sim_time": is_sim},
            os.path.join(
                get_package_share_directory("arduinobot_controller"),
                "config",
                "arduinobot_controllers.yaml",
            ),
        ],
        condition=UnlessCondition(is_sim),
    )

    #spawns the joint state broadcaster
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager",
        ],
    )

    #spawns the arm controller (joint_1, joint_2, joint_3)
    arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["arm_controller", "--controller-manager", "/controller_manager"],
    )

    #spawns the gripper controller (joint_4)
    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["gripper_controller", "--controller-manager", "/controller_manager"],
    )

    #puts all launch actions into a LaunchDescription and returns it to the ros launch system
    return LaunchDescription(
        [
            is_sim_arg,
            robot_state_publisher_node,
            controller_manager,
            joint_state_broadcaster_spawner,
            arm_controller_spawner,
            gripper_controller_spawner,
        ]
    )