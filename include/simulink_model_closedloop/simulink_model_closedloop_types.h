//
// File: simulink_model_closedloop_types.h
//
// Code generated for Simulink model 'simulink_model_closedloop'.
//
// Model version                  : 20.15
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Apr 11 23:44:58 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_simulink_model_closedloop_types_h_
#define RTW_HEADER_simulink_model_closedloop_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
struct SL_Bus_simulink_model_closedloop_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
}

;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_simulink_model_closedloop_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_simulink_model_closedloop_std_msgs_Header
{
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_simulink_model_closedloop_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_simulink_model_closedloop_geometry_msgs_Quaternion
{
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_simulink_model_closedloop_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_sensor_msgs_Imu_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulink_model_closedloop_sensor_msgs_Imu_

// MsgType=sensor_msgs/Imu
struct SL_Bus_simulink_model_closedloop_sensor_msgs_Imu
{
  // MsgType=std_msgs/Header
  SL_Bus_simulink_model_closedloop_std_msgs_Header Header;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_simulink_model_closedloop_geometry_msgs_Quaternion Orientation;
  real_T OrientationCovariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_simulink_model_closedloop_geometry_msgs_Vector3 AngularVelocity;
  real_T AngularVelocityCovariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_simulink_model_closedloop_geometry_msgs_Vector3 LinearAcceleration;
  real_T LinearAccelerationCovariance[9];
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T
#endif                         // RTW_HEADER_simulink_model_closedloop_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
