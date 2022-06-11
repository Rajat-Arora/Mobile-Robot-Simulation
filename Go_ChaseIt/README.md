# Go_ChaseIt
##### It contians implementation of a mobile robot following a white coloured ball using camera input stream by using Gazebo plugins.  

### Build and Launch 
* Build instructions are similar to a typical catkin package.
* Navigate to `Go_ChaseIt` workspace.    
* `catkin_make` and `source devel/setup.bash`.
*  Use the commands `roslaunch my_robot world.launch` and `roslaunch ball_chaser ball_chasr.launch` to run the simulation and move around the ball to test.

### Results

| Gazebo Simulation | Rviz Visualization | 
|:-------:|:-----------------:|
|  <img src="https://user-images.githubusercontent.com/97186785/173177404-cf8ed584-1232-4bc9-b052-dda01266b5fe.gif" width="700"> | <img src="https://user-images.githubusercontent.com/97186785/173177552-cf03e5cf-694d-4fa3-802c-6c3401bf6e51.gif" width="700">|
