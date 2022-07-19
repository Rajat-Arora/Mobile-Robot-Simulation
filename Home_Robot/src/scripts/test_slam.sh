#!/bin/sh

xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; export TURTLEBOT3_MODEL=burger; roslaunch turtlebot3_gazebo turtlebot3_myWorld.launch" &

sleep 5
xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; roslaunch turtlebot_rviz_launchers view_navigation.launch" &

sleep 5
xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; roslaunch gmapping slam_gmapping_pr2.launch" &

sleep 5
xterm  -e  " source /opt/ros/noetic/setup.bash; source /home/rajat/robotics/Mobile-Robot-Simulation/Home_Robot/devel/setup.bash; export TURTLEBOT3_MODEL=burger; roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch "

