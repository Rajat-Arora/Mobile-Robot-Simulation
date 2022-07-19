#!/bin/sh

xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; export TURTLEBOT3_MODEL=burger; roslaunch turtlebot3_gazebo turtlebot3_world.launch" &

sleep 5
xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; export TURTLEBOT3_MODEL=burger; roslaunch turtlebot3_navigation turtlebot3_navigation.launch" &


sleep 10
xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; export TURTLEBOT3_MODEL=burger; roslaunch pick_objects pick_objects.launch" &

sleep 1
xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; export TURTLEBOT3_MODEL=burger; rosrun  add_markers add_markers"




