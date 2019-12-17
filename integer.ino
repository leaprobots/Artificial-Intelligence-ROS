/*
 * rosserial Publisher Example
 * Prints "hello world!"
 */

#include <ros.h>
#include <std_msgs/Float32.h>

ros::NodeHandle  nh;

std_msgs::Float32 str_msg;
ros::Publisher chatter("chatter", &str_msg);

int a=1;

void setup()
{
  nh.initNode();
  nh.advertise(chatter);
}

void loop()
{
  str_msg.data=a;
  a=a+2;
  chatter.publish( &str_msg );
  nh.spinOnce();
  delay(1000);
}
