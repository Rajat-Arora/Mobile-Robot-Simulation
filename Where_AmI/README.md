# Where_AmI
##### It contians implementation of a mobile robot localizing itself using AMCL ROS package, being provided with a map from pgm map creater package.  
###### Note: Inital position of robot is kept intentionally wrong even then it localizes quickly.
### Build and Launch 
* Build instructions are similar to a typical catkin package.
* Navigate to `Where_AmI` workspace.    
* `catkin_make` and `source devel/setup.bash`.
*  Use the commands `roslaunch my_robot amcl.launch` and `roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch` to run the simulation and move around using teleop and observe the robot localizing itself.

### Results
* Visulaization in Gazebo and Rviz.

<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/173200492-58fe7341-307d-4a5a-ad46-13515f9ed889.gif" />
</p>
