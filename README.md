# Voice-Controlled Robotic Arm with Alexa

In this project, I created a real robotic arm that can be controlled using your voice through the Amazon Alexa voice assistant. The goal of the project is to design a system where a user can control a robotic arm to perform tasks simply by issuing voice commands. 

## Concepts Covered

### 1. **Gazebo Simulation:**
   Used Gazebo, a powerful robotics simulation tool, to create virtual environments for testing and refining the robotic arm before deploying it to real hardware.

### 2. **Robot Kinematics:**
   Studied the robot's kinematic chain and how to compute its motion from joint parameters to end-effector position using forward and inverse kinematics.

### 3. **ROS 2 Basics:**
   Introduced to ROS 2 (Robot Operating System), including fundamental concepts like nodes, topics, and services. This is the foundation for building robotic applications.

### 4. **ros2_control Library:**
   Integrated the `ros2_control` library to manage the robotic arm’s hardware interface, control loops, and communication with hardware drivers.

### 5. **MoveIt! 2:**
   Implemented MoveIt! 2, which provides motion planning and control tools for the robotic arm. It allows us to generate trajectories, handle planning, and execute commands.

### 6. **Using Arduino with ROS 2:**
   Learned how to interface an Arduino board with ROS 2 for controlling hardware components like motors and sensors, which are essential for robot control.

### 7. **Interface Alexa with ROS 2:**
   Created an interface between Amazon Alexa and ROS 2, allowing users to control the robotic arm through voice commands. Used `ngrok` to expose the local ROS 2 server to the Alexa voice service.

## Prerequisites

To get started with this project, you'll need to set up the following:

1. **Ubuntu 22.04** installed on your system.
2. **ROS 2 Humble or Jazzy** installed on Ubuntu.
3. **Install necessary ROS 2 libraries** for simulation, control, and motion planning:

```bash
sudo apt-get update && sudo apt-get install -y \
     ros-humble-joint-state-publisher-gui \
     ros-humble-xacro \
     ros-humble-ros2-control \
     ros-humble-moveit* \
     ros-humble-ros2-controllers \
     ros-humble-ros-gz-* \
     ros-humble-*-ros2-control
```


4. Install VS Code and Arduino IDE on your PC in order to build and load the Arduino code on the device.

5. Install Python and C++ additional libraries:

  ```bash
  sudo apt-get update && sudo apt-get install -y \
        libserial-dev \
        python3-pip
        pip install pyserial
  ```
## Usage
### 1. To launch the ROS 2 Simulated robot:

```bash
ros2 launch arduinobot_bringup simulated_robot.launch.py
```
### 2. To launch the Real robot, connect the Arduino to the PC and upload the code in the folder on the Arduino controller. Then launch the real robot

```bash
ros2 launch arduinobot_bringup real_robot.launch.py
```
### 3. To launch the interface with Alexa download ngrok and create an account then setup ngrok with your key

```bash
./ngrok authtoken <YOUR-KEY>
```
### 4. Then start the ngrok web server with

```bash
./ngrok http 5000
```
Copy the link that provides ngrok and paste it in the section Endpoint of your Alexa Developer account

## Contact

Jeswanth Kanipakam: LinkedIn - https://www.linkedin.com/in/jeswanth-kanipakam

Email: jeswanthkanipakam@gmail.com
