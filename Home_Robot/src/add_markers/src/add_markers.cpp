#include <ros/ros.h>
#include <visualization_msgs/Marker.h>

int main( int argc, char** argv )
{
  ros::init(argc, argv, "add_markers");
  ros::NodeHandle n;
  ros::Rate r(1);
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
/*
  bool pick_objects_node = false;
  
  while(true){
	
	n.getParam("pick_objects_node", pick_objects_node);
	
	if(pick_object_node)

  }  
*/

  // Set our initial shape type to be a cube
  uint32_t shape = visualization_msgs::Marker::CUBE;

    visualization_msgs::Marker marker;
    marker.header.frame_id = "map";
    marker.header.stamp = ros::Time::now();
    marker.ns = "basic_shapes";
    marker.id = 0;
    marker.type = shape;
    marker.action = visualization_msgs::Marker::ADD;
    marker.pose.position.x = -0.42;
    marker.pose.position.y = -2.074;
    marker.pose.position.z = 0.05;
    marker.pose.orientation.x = 0;
    marker.pose.orientation.y = 0;
    marker.pose.orientation.z = 0;
    marker.pose.orientation.w = 1.0;
    marker.scale.x = 0.1;
    marker.scale.y = 0.1;
    marker.scale.z = 0.1;
    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

    marker.lifetime = ros::Duration();
	
	while(ros::ok()){

    	while (marker_pub.getNumSubscribers() < 1)
    	{
			if (!ros::ok())
			{
				return 0;
			}
      		ROS_WARN_ONCE("Please create a subscriber to the marker");
      		sleep(1);
    	}
    
    	marker_pub.publish(marker);
		
		bool pick_object_param = false;

		n.getParam("/pick_objects/pick_object", pick_object_param);
	
		if(pick_object_param)
    	{
     	 	ROS_INFO_STREAM("Robot has reached the object location");
      		break;
		}
		
		ROS_INFO_STREAM("Waiting to reach the pick location");
		r.sleep();
	
	}
 
	marker.action = visualization_msgs::Marker::DELETE;
	marker_pub.publish(marker);

	bool place_object_param = false;

	while(true){

		n.getParam("/pick_objects/place_object", place_object_param);
		if(place_object_param){
		
			break;
		}	
		ROS_INFO_STREAM("Waiting to reach the place location");
		sleep(1);
	}

    marker.pose.position.x = 1.87;
    marker.pose.position.y = 0.015;
    marker.pose.position.z = 0.05;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;
	

	while(ros::ok()){

		// Set the frame ID and timestamp
		marker.header.stamp = ros::Time::now();

		// Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
		marker.action = visualization_msgs::Marker::ADD;
		
		marker.lifetime = ros::Duration();

		while (marker_pub.getNumSubscribers() < 1)
		{
			if (!ros::ok())
			{
				return 0;
			}
			ROS_WARN_ONCE("Please create a subscriber to the marker");
			sleep(1);
		}
		marker_pub.publish(marker);
		
		r.sleep();
	
	}

	return 0;

}
