#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "simulink_model_closedloop";

// For Block simulink_model_closedloop/Subscribe
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_simulink_model_closedloop_geometry_msgs_Point> Sub_simulink_model_closedloop_136;

// For Block simulink_model_closedloop/Subscribe1
SimulinkSubscriber<sensor_msgs::Imu, SL_Bus_simulink_model_closedloop_sensor_msgs_Imu> Sub_simulink_model_closedloop_166;

// For Block simulink_model_closedloop/Publish
SimulinkPublisher<geometry_msgs::Point, SL_Bus_simulink_model_closedloop_geometry_msgs_Point> Pub_simulink_model_closedloop_135;

// For Block simulink_model_closedloop/Publish1
SimulinkPublisher<sensor_msgs::Imu, SL_Bus_simulink_model_closedloop_sensor_msgs_Imu> Pub_simulink_model_closedloop_150;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

