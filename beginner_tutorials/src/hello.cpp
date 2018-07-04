#include "ros/ros.h"
#include "std_msgs/String.h"
using namespace ros;
int main(int argc, char **argv)
{
  ros::Time::init();

  ros::init(argc, argv, "hello");

  ros::Rate loop_rate(10);

  while (ros::ok())
  {

    ROS_INFO("%s", "hello world !!!!!!!!!!!");

    ros::spinOnce();

    loop_rate.sleep();

  }
  return 0;
}
