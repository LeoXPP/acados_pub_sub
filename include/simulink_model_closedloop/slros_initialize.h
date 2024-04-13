#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "simulink_model_closedloop_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block simulink_model_closedloop/Subscribe
extern SimulinkSubscriber<geometry_msgs::Point, SL_Bus_simulink_model_closedloop_geometry_msgs_Point> Sub_simulink_model_closedloop_136;

// For Block simulink_model_closedloop/Subscribe1
extern SimulinkSubscriber<sensor_msgs::Imu, SL_Bus_simulink_model_closedloop_sensor_msgs_Imu> Sub_simulink_model_closedloop_166;

// For Block simulink_model_closedloop/Publish
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_simulink_model_closedloop_geometry_msgs_Point> Pub_simulink_model_closedloop_135;

// For Block simulink_model_closedloop/Publish1
extern SimulinkPublisher<sensor_msgs::Imu, SL_Bus_simulink_model_closedloop_sensor_msgs_Imu> Pub_simulink_model_closedloop_150;

void slros_node_init(int argc, char** argv);

#endif
