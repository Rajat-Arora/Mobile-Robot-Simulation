# Home_Robot
##### It contians implementation of point to point Navigation using `move base` ROS package. 
##### It uses the `map server` ROS package that helps to load the saved 2d occupancy gridmap data built using `gmapping` ROS package, also uses `AMCL` ros package for Localiazation.  
### Build
* Build instructions are similar to a typical catkin package.
* Navigate to `Home_Robot` workspace.    
* `catkin_make`, `source devel/setup.bash` and `cd src/scripts`.
* Modify the paths in various script files according to your file system.

#
### Launch SLAM

*  Run `bash test_slam_turtlebot.sh` to run gmapping package on turtlebot3 world OR Run `bash test_slam_own.sh` to run it on your own world.
*  For running on your own world please ensure that use save your `.world` file in `/Mobile-Robot-Simulation/Home_Robot/src/turtlebot3_simulations/turtlebot3_gazebo/worlds` directory and update the world name in `turtlebot3_myWorld.launch` launch file in `/Mobile-Robot-Simulation/Home_Robot/src/turtlebot3_simulations/turtlebot3_gazebo/launch` directory.
* Save the map in  `/Mobile-Robot-Simulation/Home_Robot/src/turtlebot3/turtlebot3_navigation/maps/own` by running `rosrun map_server map_server -f map` in this directory.

### SLAM Results
* Visulaization in Gazebo and Rviz.

#### Turtlebot Map and Gazebo world.

<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/179924252-492b08d5-ff7d-4cfd-8a77-447c4d95e0e7.png" />
</p>

#### Own Map and Gazebo world.
<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/179924526-6055e5db-153d-47cd-b6d1-eafcde580dca.png" />
</p>



#
### Launch Navigation

*  Run `bash test_navigation_turtlebot.sh`. 
*  Run `bash test_navigation_own.sh` to run it on your own world.
*  Provide a goal point in Rviz to navigate to that point.

### Naviagtion Results
* Visulaization in Gazebo and Rviz.

#### Turtlebot Navigation.

<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/179927477-84a45ad2-de7b-4222-a859-eb7b423cbc4c.png" />
</p>


#### Own Navigation.
<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/179926654-d57d46ef-3caa-4b72-8624-b15264217e0e.png" />
</p>


#
### Launch pick and place 
*  Run `bash pick_objects.sh`. 

### Results
* Visulaization in Gazebo and Rviz.


<p align="center">
  <img src="https://user-images.githubusercontent.com/97186785/179932290-3ad16d49-83fb-424c-b4da-e65cb1343175.gif" />
</p>

