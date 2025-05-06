// prevents multiple inclusion of this file (standaer c++ practice)
#ifndef ARDUINOBOT_INTERFACE_H
#define ARDUINOBOT_INTERFACE_H

// includes ros2 node functionality (rclcpp), lifecycle interfaces, hardware interface, serial communication library (LibSerial), and standard C++ stuff
#include <rclcpp/rclcpp.hpp>
#include <hardware_interface/system_interface.hpp>
#include <libserial/SerialPort.h>
#include <rclcpp_lifecycle/state.hpp>
#include <rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp>

#include <vector>
#include <string>

// we wrap everything inside a namespace - good practice to avoid name conflicts
namespace arduinobot_controller
{

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

// we define a hardware interface class for ros2 control
// Inherits from hardware_interface::SystemInterface, which is standard for robot systems
// this class allows ros controllers ( like JointTrajectoryController) to talk to the actual hardware (arduino)
class ArduinobotInterface : public hardware_interface::SystemInterface
{
public:
  // constructor and destructor- default constructor/destructor
  ArduinobotInterface();
  virtual ~ArduinobotInterface();

  // Implementing rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface
  // called when the hardware interface is activated (robot is ready) and deactivated (robot is shutting down or stopping)
  virtual CallbackReturn on_activate(const rclcpp_lifecycle::State &previous_state) override;
  virtual CallbackReturn on_deactivate(const rclcpp_lifecycle::State &previous_state) override;

  // Implementing hardware_interface::SystemInterface
  // initialises the hardware (eg reads parameters from the YAML config file)
  virtual CallbackReturn on_init(const hardware_interface::HardwareInfo &hardware_info) override;
  // exports joint states (position, velocity) and commands (position, velocity, effort) to ros control
  virtual std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  virtual std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;
  // read()- read sensor data from Arduino and update joint state
  // write()- send command data (like desired positions) to arduino
  virtual hardware_interface::return_type read(const rclcpp::Time & time, const rclcpp::Duration & period) override;
  virtual hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period) override;

private:
  // serial communication object for talking to arduino
  LibSerial::SerialPort arduino_;
  // serial port name (eg /dev/ttyUSB0)
  std::string port_;
  // the latest target positions (from ros controllers)
  std::vector<double> position_commands_;
  // previous commands (maybe for comparision or optimization)
  std::vector<double> prev_position_commands_;
  // the current positions read from the Arduino
  std::vector<double> position_states_;
};
}  // namespace arduinobot_controller


#endif  // ARDUINOBOT_INTERFACE_H

// this file sets up a bridge between ros2 and arduino controlled robot, enabling u to control real motors with ros2 controllers like JointTrajectoryController
// it handles serial communication, reading the robots state and sending new target commands