#include "ros/ros.h"
#include "ball_chaser/DriveToTarget.h"
#include <sensor_msgs/Image.h>

// Define a global client that can request services
ros::ServiceClient client;

// This function calls the command_robot service to drive the robot in the specified direction
void drive_robot(float lin_x, float ang_z)
{
    // TODO: Request a service and pass the velocities to it to drive the robot
	ball_chaser::DriveToTarget srv;
    srv.request.linear_x = lin_x;
    srv.request.angular_z = ang_z;
	if (client.call(srv))
  	{
    ROS_INFO("Client called service");
  	}
  	else
  	{
    ROS_ERROR("Failed to call service add_two_ints");
    return;
  	}

return;
}

// This callback function continuously executes and reads the image data
void process_image_callback(const sensor_msgs::Image img)
{

    
    int white_pixel = 255;
    int left = img.step/3;
    int right = left*2;
    // TODO: Loop through each pixel in the image and check if there's a bright white one
    ROS_INFO("%d ",img.step);
    ROS_INFO("%d ",img.height);
    ROS_INFO("%d ",img.width);
    ROS_INFO("%ld ",img.data.size());
	ROS_INFO("   oover");
    int found=0;
    for(int i=0; i<img.data.size(); i+=3)
    {
            if(img.data[i]>=245){  //R channel
                if(img.data[i+1]>=245){ //G channel
                    if(img.data[i+2]>=245){ //B channel
                        found++;    
                       // ROS_INFO("Move Robot");
                        if((i+2)%img.step <=left){
                            drive_robot(0.0, 0.25);
                            break;

                        }
                        else if((i+2)%img.step > left && (i+2)%img.step < right){
                            drive_robot(4.0,0.0);
                            break;
                        }
                        else{
                            drive_robot(0.0,-0.25);
                            break;
                        }
                    }
                }
            }

         //   ROS_INFO("Don't move");

    }
    if(!found){
        drive_robot(0.0,0.0);
    }
    // Then, identify if this pixel falls in the left, mid, or right side of the image
    // Depending on the white ball position, call the drive_bot function and pass velocities to it
    // Request a stop when there's no white ball seen by the camera
}

int main(int argc, char** argv)
{
    // Initialize the process_image node and create a handle to it
    ros::init(argc, argv, "process_image");
    ros::NodeHandle n;

    // Define a client service capable of requesting services from command_robot
    client = n.serviceClient<ball_chaser::DriveToTarget>("/ball_chaser/command_robot");

    // Subscribe to /camera/rgb/image_raw topic to read the image data inside the process_image_callback function
    ros::Subscriber sub1 = n.subscribe("/camera/rgb/image_raw", 10, process_image_callback);

    // Handle ROS communication events
    ros::spin();

    return 0;
}
