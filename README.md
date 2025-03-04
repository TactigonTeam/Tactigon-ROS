# Tactigon ROS2 Nodes Installation and Usage Guide

![ROS2 Logo](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/Ros_logo.svg/1920px-Ros_logo.svg.png)
![Tactigon Logo](https://pypi-camo.freetls.fastly.net/90dce08d567e5182bf672f417aded1b75e57b728/68747470733a2f2f617661746172732e67697468756275736572636f6e74656e742e636f6d2f752f36333032303238353f733d32303026763d34)


Welcome to the **Tactigon ROS2 Nodes** guide! This document will help you install and use the Tactigon-based ROS2 packages.

---

## 🚀 Prerequisites

### 1️⃣ Install Ubuntu 24.04 LTS
Download and install Ubuntu 24.04 LTS from the [official website](https://ubuntu.com/download/desktop).

### 2️⃣ Install ROS2 Jazzy
Follow the official [ROS2 Jazzy Installation Guide](https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debians.html) to install ROS2 and its developer tools.
It is also suggested to run the following command after the installation in order to avoid having to source ros2 on each new terminal
```bash
echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc
```

---

## 📁 Setting Up the ROS2 Workspace

### 1️⃣ Download and Extract Files
Download the compressed file containing the following folders:
```
models/
src/
```
Extract the file into a directory named `ros2_ws`:
```bash
mkdir -p ~/ros2_ws
cd ~/ros2_ws
# Extract your compressed file here
```

Your workspace structure should look like this:
```
ros2_ws/
├── models/
└── src/
    ├── tactigon_msgs/          # Custom message definitions
    └── tactigon_ros/           # Python package with nodes
```

---

## 🔨 Building the ROS2 Workspace

### 1️⃣ Install Dependencies
```bash
cd ~/ros2_ws
export PIP_BREAK_SYSTEM_PACKAGES=1
sudo apt install python3-pip 
sudo rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -y 
```

### 2️⃣ Build the Workspace
```bash
colcon build
```

### 3️⃣ Source the Workspace
```bash
source install/setup.bash
```
---

## 📦 The `tactigon_msgs` Package

This package contains custom message definitions for the Tactigon device.

### Message Definitions
📌 Located in `tactigon_msgs/msg/`
- **TSkinState.msg** - Full state of the Tactigon device
- **Touch.msg** - Touchpad data
- **Angle.msg** - IMU (orientation) data
- **Gesture.msg** - Gesture detection data

### Example: `TSkinState.msg`
```yaml
builtin_interfaces/Time timestamp
bool connected
uint8 battery
uint8 selector
bool selector_valid
float32 touchpad_x_pos
float32 touchpad_y_pos
float32 angle_roll
float32 angle_pitch
float32 angle_yaw
string gesture_gesture
float32 gesture_probability
```

---

## ▶ Running the Nodes

### 1️⃣ Start the `tactigon_ros` Nodes
#### `tactigon_data` - Publishes Tactigon data 
This node handles the connection with the Tactigon Skin and publishes a message with the current state on the "/tactigon_state" topic.

Before running this node it is neccesary to modify `TSKIN_MAC = "C0:83:35:34:28:38"` with your own Tactigon Skin MAC address. 
```bash
ros2 run tactigon_ros tactigon_data
```
#### `tactigon_logger` - Logs sensor data
This node outputs a CSV file with the logged data of the tactigon. Has to be runned in parallel to the tactigon_data node.
```bash
ros2 run tactigon_ros tactigon_logger
```
#### `tactigon_turtlesim_controller` - Controls Turtlesim via gestures
This node is a simple demo. The node maps certain Tactigon gestures to the control inputs of the turtlebot 2D simulation. Note: run this two nodes in different terminals in parallel. 
```bash
ros2 run turtlesim turtlesim_node
```
```bash
ros2 run tactigon_ros tactigon_turtlesim_controller
```

### 2️⃣ Check Topics
At any point you it is possible to verify if the nodes are publishing correctly:
```bash
ros2 topic list
```
Expected output:
```
/tactigon_state
/turtle1/cmd_vel
```

---

## ❓ Troubleshooting

❌ **Python Virtual Environment Not Found**
➡ Ensure `PYTHONPATH` is correctly set.

❌ **Workspace Not Sourced**
➡ Run:
```bash
source ~/ros2_ws/install/setup.bash
```

❌ **Package Not Found**
➡ Ensure you ran `colcon build` and sourced it correctly.

---


📧 **Questions?** Contact me at stage_robotica@nextind.eu .

🎯 Happy ROS2 Development! 🚀
