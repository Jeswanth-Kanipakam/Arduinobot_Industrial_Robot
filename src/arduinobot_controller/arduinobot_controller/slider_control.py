#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
#JointState is a standard message that holds positions (and optionally velocities/efforts) for joints
from sensor_msgs.msg import JointState
#JointTrajectory and JointTrajectoryPoint are used to send movement commands to controllers
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

#defines a custom ROS2 node called slider_control
class SliderControl(Node):

    def __init__(self):
        #this initializes the node with the name slider_control
        super().__init__("slider_control")
        #creates publishers to topics:
        #arm_controller/joint_trajectory : to control the arm joints
        self.arm_pub_ = self.create_publisher(JointTrajectory, "arm_controller/joint_trajectory", 10)
        #gripper_controller/joint_trajectory : to control the gripper joint
        self.gripper_pub_ = self.create_publisher(JointTrajectory, "gripper_controller/joint_trajectory", 10)
        #Subscribes to the joint_commands topic, where it expects JointState messages
        #every time a message is received, it calls sliderCallback(msg)
        self.sub_ = self.create_subscription(JointState, "joint_commands", self.sliderCallback, 10)
        #just logs a message when the node starts
        self.get_logger().info("Slider Control Node started")

    #this is triggered when a JointState message arrives
    def sliderCallback(self, msg):
        #creates two JointTrajectory messages: one for the arm, one for the gripper
        arm_controller = JointTrajectory()
        gripper_controller = JointTrajectory()
        #specifies which joints each trajectory controls
        #the arm controls joints 1,2 and 3
        #the gripper controls joint 4
        arm_controller.joint_names = ["joint_1", "joint_2", "joint_3"]
        gripper_controller.joint_names = ["joint_4"]

        #creates trajectory points, which contain the desired positions (and optionally velocities, efforts etc)
        arm_goal = JointTrajectoryPoint()
        gripper_goal = JointTrajectoryPoint()
        #assigns the incoming slider positions:
        #the first 3 positions are for the arm
        #the 4rth position is for the gripper
        arm_goal.positions = msg.position[:3]
        gripper_goal.positions = [msg.position[3]]

        #adds the goal point(s) to the respective trajectories
        arm_controller.points.append(arm_goal)
        gripper_controller.points.append(gripper_goal)

        #publishes the trajectories to move the arm and gripper
        self.arm_pub_.publish(arm_controller)
        self.gripper_pub_.publish(gripper_controller)


def main():
    rclpy.init()

    simple_publisher = SliderControl()
    rclpy.spin(simple_publisher)
    
    simple_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

#the node listens for joint positions from a topic and sends those positions to two separate controllers: one for the arm and one for the gripper