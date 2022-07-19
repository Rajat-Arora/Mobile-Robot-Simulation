# Map_MyWorld
##### It contians implementation of SLAM using RTABMAP ROS package. 
##### It takes in data from Laser Scan, RGBD Camera and Ododmetry and Outputs 3D Map and can also be used for Localiazation.  
### Build and Launch 
* Build instructions are similar to a typical catkin package.
* Navigate to `Map_MyWorld` workspace.    
* `catkin_make` and `source devel/setup.bash`.
*  Use the commands `roslaunch my_robot rtabmap.launch` to start RVIZ and Gazebo simulation. 
*  In another terminal do `export TURTLEBOT3_MODEL=burger` and `roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch` to move around using teleop and observe the 3D Map.

### Results
* Visulaization in Gazebo and Rviz.


#### 3D Map and Gazebo world.
<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/173428005-40ba3203-bfee-42c0-88c4-d596784db519.png" />
</p>

#### 3D POINT CLOUD MAP
<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/173429336-c609243c-5baf-43dd-9319-59e8fae99fab.gif" />
</p>


#### Visualization of RTABMAP Database.
<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/173428013-0eaa236d-f3fb-43ce-90e9-44dc52198b70.png" />
</p>


