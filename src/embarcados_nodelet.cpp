#include <pluginlib/class_list_macros.h>
#include <nodelet/nodelet.h>
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>

namespace embarcados_ros_nodelet {

class TestNodelet : public nodelet::Nodelet {
private:

virtual void onInit() {
    ros::NodeHandle& nh = getNodeHandle();
    nodelet_pub = nh.advertise<std_msgs::String>("nodelet_shout", 1000);
    nodelet_sub = nh.subscribe("nodelet_listen",1000, &TestNodelet::callback, this);
}

void callback(const std_msgs::String::ConstPtr& message) {
    std_msgs::String out_message;
    std::stringstream ss;
    ss << "Embarcados Nodelet said: Hey I'm Alive!";
    out_message.data = ss.str();
    nodelet_pub.publish(out_message);
}

ros::Publisher nodelet_pub;
ros::Subscriber nodelet_sub;
};


PLUGINLIB_EXPORT_CLASS(embarcados_ros_nodelet::TestNodelet, nodelet::Nodelet)
}