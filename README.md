# Artificial-Intelligence-ROS
ARDUINO AND ROS SERIAL COMMUNICATION 
We achieved this by using  rosserial where we publish the arduino output to a topic and calling that topic in ros in order to get the data.

This is a test code to display the arduino output in ROS.
The output is given in the screenshots
The serial node is initialised by 

$rosrun rosserial_python serialnode.py /dev/ttyAMC0

ADDED CODE FOR TAKING ENCODER DATA FROM SINGLE DC HALL ENCODER MOTOR
