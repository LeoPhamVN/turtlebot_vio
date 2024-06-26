#include "ros/ros.h"
#include "std_msgs/String.h"
#include "image_processing_node.hpp"


int main(int argc, char **argv) {
    ros::init(argc, argv, "image_processing_node");
    ros::NodeHandle nh;

    imageHandler handler(nh, 2.0, 0.5);
    ros::spin();
    return 0;
}
