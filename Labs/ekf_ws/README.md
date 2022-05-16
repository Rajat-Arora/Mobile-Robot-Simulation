git clone https://github.com/Rajat-Arora/Mobile-Robot-Simulation/new/main/Labs/ekf_ws
cd ~/robotics/Mobile-Robot-Simulation/Labs/ekf_ws
catkin_make
source devel/setup.bash
roslaunch main main.launch
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch

