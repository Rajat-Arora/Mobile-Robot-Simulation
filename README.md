# Mobile-Robot-Simulation
It contains usage of ROS packages related to Localization, SLAM and Navigaiton in Simulation
* For Build instructions and simulation results click on specific project name.
* Tested on Ubuntu 20.04 and ROS Noetic.

## [Build_MyWorld](https://github.com/Rajat-Arora/Mobile-Robot-Simulation/tree/main/Build_MyWorld)
* Spawning a differential drive robot in a simulation environment. 
* Display Hello World mesaage on the terminal as soon as the World is launched.

## [Go_ChaseIt](https://github.com/Rajat-Arora/Mobile-Robot-Simulation/tree/main/Go_ChaseIt)
* Chasing a white colored ball in gazebo simulation.
* Using camera plugin for providing camera input feed.

## [Where_AmI](https://github.com/Rajat-Arora/Mobile-Robot-Simulation/tree/main/Where_AmI)
* Localizing the robot using AMCL ROS package.
* Using turtlebot3_teleop package for teleoperation of robot.

## [Map_MyWorld](https://github.com/Rajat-Arora/Mobile-Robot-Simulation/tree/main/Map_MyWorld)
* SLAM using RTABMAP ROS package.
* Using Input of RGBD Camera, Odometry and Lidar for mapping. 
* Using turtlebot3_teleop package for teleoperation of robot.

## [Labs](https://github.com/Rajat-Arora/Mobile-Robot-Simulation/tree/main/Labs)
* Implementation of EKF using `robot_pose_ekf` package.
* MCL implementation in C++.
