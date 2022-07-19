#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

// Define a client for to send goal requests to the move_base server through a SimpleActionClient
typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char** argv){
  // Initialize the simple_navigation_goals node
  ros::init(argc, argv, "pick_objects_navigation");
  
  ros::NodeHandle nh; 
  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);

  // Wait 5 sec for move_base action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }

  move_base_msgs::MoveBaseGoal pick_goal;

  // set up the frame parameters
  pick_goal.target_pose.header.frame_id = "map";
  pick_goal.target_pose.header.stamp = ros::Time::now();

  // Define a position and orientation for the robot to reach
  pick_goal.target_pose.pose.position.x = -0.42;
  pick_goal.target_pose.pose.position.y = -2.074;
  pick_goal.target_pose.pose.orientation.w = 1.0;

   // Send the goal position and orientation for the robot to reach
  ROS_INFO("Sending pickup goal location");
  ac.sendGoal(pick_goal);
	
  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
    ROS_INFO("Hooray, the base moved to pick location");
	nh.setParam("/pick_objects/pick_object", true);
  }
  else
    ROS_INFO("The base failed to move forward 1 meter for some reason");

  ros::Duration(5.0).sleep();
  
  //Placement goal

  move_base_msgs::MoveBaseGoal place_goal;

  // set up the frame parameters
  place_goal.target_pose.header.frame_id = "map";
  place_goal.target_pose.header.stamp = ros::Time::now();

  // Define a position and orientation for the robot to reach
  place_goal.target_pose.pose.position.x = 1.87;
  pick_goal.target_pose.pose.position.y = -0.015;
  place_goal.target_pose.pose.orientation.w = 1.0;

   // Send the goal position and orientation for the robot to reach
  ROS_INFO("Sending placement goal location");
  ac.sendGoal(place_goal);

  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
    ROS_INFO("Hooray, the base moved 1 meter forward");
	nh.setParam("/pick_objects/place_object", true);
  }
  else
    ROS_INFO("The base failed to move forward 1 meter for some reason");
  

  ros::Duration(10.0).sleep();


  return 0;
}
