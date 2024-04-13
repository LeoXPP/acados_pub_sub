//
// File: simulink_model_closedloop_data.cpp
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
#include "simulink_model_closedloop.h"

// Block parameters (default storage)
simulink_model_closedloop::P_simulink_model_closedloop_T
  simulink_model_closedloop::simulink_model_closedloop_P = {
  // Computed Parameter: Constant_Value
  //  Referenced by: '<S2>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: input_array_Y0
  //  Referenced by: '<S4>/input_array'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S13>/Out1'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Constant_Value_a
  //  Referenced by: '<S9>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Constant_Value_l
  //  Referenced by: '<S1>/Constant'

  {
    0.0,                               // X
    0.0,                               // Y
    0.0                                // Z
  },

  // Computed Parameter: Out1_Y0_b
  //  Referenced by: '<S3>/Out1'

  {
    0.0,                               // X
    0.0,                               // Y
    0.0                                // Z
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S12>/Out1'

  {
    0.0,                               // X
    0.0,                               // Y
    0.0                                // Z
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S8>/Constant'

  {
    0.0,                               // X
    0.0,                               // Y
    0.0                                // Z
  },

  // Expression: [model.x0 0 0]
  //  Referenced by: '<Root>/y_ref_0'

  { 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: repmat([model.ey_min, model.Track_vel_min , model.delta_min, model.Tc_min]',N-1,1)
  //  Referenced by: '<Root>/lbx'

  { -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0,
    -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0,
    -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0,
    -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0 },

  // Expression: repmat([model.ey_max, model.Track_vel_max , model.delta_max, model.Tc_max]',N-1,1)
  //  Referenced by: '<Root>/ubx'

  { 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0,
    0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0 },

  // Expression: repmat([ model.ddelta_min, model.dTc_min]',N,1)
  //  Referenced by: '<Root>/lbu'

  { -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0,
    -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0,
    -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0,
    -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0 },

  // Expression: repmat([model.ddelta_max, model.dTc_max]',N,1)
  //  Referenced by: '<Root>/ubu'

  { 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0,
    4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0,
    2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0,
    4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0,
    2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0,
    4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0,
    2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0 },

  // Expression: repmat([constraint.alon_min, constraint.alat_min]',N,1)
  //  Referenced by: '<Root>/lh'

  { -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0,
    -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0,
    -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0,
    -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0 },

  // Expression: repmat([constraint.alon_max, constraint.alat_max]',N,1)
  //  Referenced by: '<Root>/uh'

  { 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0,
    4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0,
    8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0,
    4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0,
    8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0,
    4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0,
    8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0 },

  // Expression: model.x0
  //  Referenced by: '<Root>/Delay1'

  { 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
};

//
// File trailer for generated code.
//
// [EOF]
//
