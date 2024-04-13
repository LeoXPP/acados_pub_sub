//
// File: simulink_model_closedloop.h
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
#ifndef RTW_HEADER_simulink_model_closedloop_h_
#define RTW_HEADER_simulink_model_closedloop_h_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#include "simulink_model_closedloop_types.h"
#include <stddef.h>
#include <string.h>

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetInf.h"

}

// Macros for accessing real-time model data structure
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

// Class declaration for model simulink_model_closedloop
class simulink_model_closedloop
{
  // public data and function members
 public:
  // Block signals (default storage)
  struct B_simulink_model_closedloop_T {
    SL_Bus_simulink_model_closedloop_sensor_msgs_Imu In1_g;// '<S4>/In1'
    SL_Bus_simulink_model_closedloop_geometry_msgs_Point In1_g2;// '<S3>/In1'
    real_T X;
    real_T Y;
    real_T X_h;
    real_T Y_i;
    real_T Z;
    real_T X_hw;
    real_T Y_in;
    real_T Z_n;
    real_T y_ref_0[10];                // '<Root>/y_ref_0'
    real_T lbx[196];                   // '<Root>/lbx'
    real_T ubx[196];                   // '<Root>/ubx'
    real_T lbu[100];                   // '<Root>/lbu'
    real_T ubu[100];                   // '<Root>/ubu'
    real_T lh[100];                    // '<Root>/lh'
    real_T uh[100];                    // '<Root>/uh'
    real_T u0[2];                      // '<Root>/S-Function1'
    real_T SFunction1_o2[408];         // '<Root>/S-Function1'
    real_T SFunction1_o3;              // '<Root>/S-Function1'
    real_T SFunction1_o4;              // '<Root>/S-Function1'
    real_T SFunction1_o5;              // '<Root>/S-Function1'
    real_T SFunction1_o6[8];           // '<Root>/S-Function1'
    real_T SFunction1_o7;              // '<Root>/S-Function1'
    real_T SFunction1_o8;              // '<Root>/S-Function1'
    real_T u0_b[8];                    // '<Root>/Delay1'
    real_T x[8];                       // '<Root>/S-Function'
    real_T yref_N[8];                  // '<S7>/reference'
    real_T yref[490];                  // '<S7>/reference'
    SL_Bus_simulink_model_closedloop_sensor_msgs_Imu BusAssignment1;// '<Root>/Bus Assignment1' 
  };

  // Block states (default storage) for system '<Root>'
  struct DW_simulink_model_closedloop_T {
    ros_slroscpp_internal_block_P_T obj;// '<S6>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_m;// '<S5>/SinkBlock'
    ros_slroscpp_internal_block_S_T obj_n;// '<S9>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_e;// '<S8>/SourceBlock'
    real_T Delay1_DSTATE[8];           // '<Root>/Delay1'
  };

  // Parameters (default storage)
  struct P_simulink_model_closedloop_T {
    SL_Bus_simulink_model_closedloop_sensor_msgs_Imu Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S2>/Constant'

    SL_Bus_simulink_model_closedloop_sensor_msgs_Imu input_array_Y0;// Computed Parameter: input_array_Y0
                                                                      //  Referenced by: '<S4>/input_array'

    SL_Bus_simulink_model_closedloop_sensor_msgs_Imu Out1_Y0;// Computed Parameter: Out1_Y0
                                                                //  Referenced by: '<S13>/Out1'

    SL_Bus_simulink_model_closedloop_sensor_msgs_Imu Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                      //  Referenced by: '<S9>/Constant'

    SL_Bus_simulink_model_closedloop_geometry_msgs_Point Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                      //  Referenced by: '<S1>/Constant'

    SL_Bus_simulink_model_closedloop_geometry_msgs_Point Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                                      //  Referenced by: '<S3>/Out1'

    SL_Bus_simulink_model_closedloop_geometry_msgs_Point Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                                      //  Referenced by: '<S12>/Out1'

    SL_Bus_simulink_model_closedloop_geometry_msgs_Point Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                      //  Referenced by: '<S8>/Constant'

    real_T y_ref_0_Value[10];          // Expression: [model.x0 0 0]
                                          //  Referenced by: '<Root>/y_ref_0'

    real_T lbx_Value[196];
    // Expression: repmat([model.ey_min, model.Track_vel_min , model.delta_min, model.Tc_min]',N-1,1)
       //  Referenced by: '<Root>/lbx'

    real_T ubx_Value[196];
    // Expression: repmat([model.ey_max, model.Track_vel_max , model.delta_max, model.Tc_max]',N-1,1)
       //  Referenced by: '<Root>/ubx'

    real_T lbu_Value[100];
                  // Expression: repmat([ model.ddelta_min, model.dTc_min]',N,1)
                     //  Referenced by: '<Root>/lbu'

    real_T ubu_Value[100];
                   // Expression: repmat([model.ddelta_max, model.dTc_max]',N,1)
                      //  Referenced by: '<Root>/ubu'

    real_T lh_Value[100];
          // Expression: repmat([constraint.alon_min, constraint.alat_min]',N,1)
             //  Referenced by: '<Root>/lh'

    real_T uh_Value[100];
          // Expression: repmat([constraint.alon_max, constraint.alat_max]',N,1)
             //  Referenced by: '<Root>/uh'

    real_T Delay1_InitialCondition[8]; // Expression: model.x0
                                          //  Referenced by: '<Root>/Delay1'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_simulink_model_closedloop_T {
    struct SimStruct_tag * *childSfunctions;
    const char_T *errorStatus;
    SS_SimMode simMode;
    RTWSolverInfo solverInfo;
    RTWSolverInfo *solverInfoPtr;
    void *sfcnInfo;

    //
    //  NonInlinedSFcns:
    //  The following substructure contains information regarding
    //  non-inlined s-functions used in the model.

    struct {
      RTWSfcnInfo sfcnInfo;
      time_T *taskTimePtrs[1];
      SimStruct childSFunctions[2];
      SimStruct *childSFunctionPtrs[2];
      struct _ssBlkInfo2 blkInfo2[2];
      struct _ssSFcnModelMethods2 methods2[2];
      struct _ssSFcnModelMethods3 methods3[2];
      struct _ssSFcnModelMethods4 methods4[2];
      struct _ssStatesInfo2 statesInfo2[2];
      ssPeriodicStatesInfo periodicStatesInfo[2];
      struct _ssPortInfo2 inputOutputPortInfo2[2];
      struct {
        time_T sfcnPeriod[1];
        time_T sfcnOffset[1];
        int_T sfcnTsMap[1];
        struct _ssPortInputs inputPortInfo[11];
        struct _ssInPortUnit inputPortUnits[11];
        struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
        real_T const *UPtrs0[8];
        real_T const *UPtrs1[8];
        real_T const *UPtrs2[10];
        real_T const *UPtrs3[490];
        real_T const *UPtrs4[8];
        real_T const *UPtrs5[196];
        real_T const *UPtrs6[196];
        real_T const *UPtrs7[100];
        real_T const *UPtrs8[100];
        real_T const *UPtrs9[100];
        real_T const *UPtrs10[100];
        struct _ssPortOutputs outputPortInfo[8];
        struct _ssOutPortUnit outputPortUnits[8];
        struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[8];
      } Sfcn0;

      struct {
        time_T sfcnPeriod[1];
        time_T sfcnOffset[1];
        int_T sfcnTsMap[1];
        struct _ssPortInputs inputPortInfo[2];
        struct _ssInPortUnit inputPortUnits[2];
        struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
        real_T const *UPtrs0[8];
        real_T const *UPtrs1[2];
        struct _ssPortOutputs outputPortInfo[1];
        struct _ssOutPortUnit outputPortUnits[1];
        struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      } Sfcn1;
    } NonInlinedSFcns;

    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;

    //
    //  Sizes:
    //  The following substructure contains sizes information
    //  for many of the model attributes such as inputs, outputs,
    //  dwork, sample times, etc.

    struct {
      uint32_T options;
      int_T numContStates;
      int_T numU;
      int_T numY;
      int_T numSampTimes;
      int_T numBlocks;
      int_T numBlockIO;
      int_T numBlockPrms;
      int_T numDwork;
      int_T numSFcnPrms;
      int_T numSFcns;
      int_T numIports;
      int_T numOports;
      int_T numNonSampZCs;
      int_T sysDirFeedThru;
      int_T rtwGenSfcn;
    } Sizes;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      time_T stepSize;
      uint32_T clockTick0;
      time_T stepSize0;
      time_T tStart;
      time_T tFinal;
      time_T timeOfLastOutput;
      boolean_T stopRequestedFlag;
      time_T *sampleTimes;
      time_T *offsetTimes;
      int_T *sampleTimeTaskIDPtr;
      int_T *sampleHits;
      int_T *perTaskSampleHits;
      time_T *t;
      time_T sampleTimesArray[1];
      time_T offsetTimesArray[1];
      int_T sampleTimeTaskIDArray[1];
      int_T sampleHitArray[1];
      int_T perTaskSampleHitsArray[1];
      time_T tArray[1];
    } Timing;
  };

  // Real-Time Model get method
  simulink_model_closedloop::RT_MODEL_simulink_model_closedloop_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  simulink_model_closedloop();

  // Destructor
  ~simulink_model_closedloop();

  // private data and function members
 private:
  // Block signals
  B_simulink_model_closedloop_T simulink_model_closedloop_B;

  // Block states
  DW_simulink_model_closedloop_T simulink_model_closedloop_DW;

  // Tunable parameters
  static P_simulink_model_closedloop_T simulink_model_closedloop_P;

  // Real-Time Model
  RT_MODEL_simulink_model_closedloop_T simulink_model_closedloop_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S7>/Display' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/Scope2' : Unused code path elimination
//  Block '<Root>/Scope5' : Unused code path elimination
//  Block '<Root>/Scope' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'simulink_model_closedloop'
//  '<S1>'   : 'simulink_model_closedloop/Blank Message'
//  '<S2>'   : 'simulink_model_closedloop/Blank Message1'
//  '<S3>'   : 'simulink_model_closedloop/Enabled Subsystem'
//  '<S4>'   : 'simulink_model_closedloop/Enabled Subsystem1'
//  '<S5>'   : 'simulink_model_closedloop/Publish'
//  '<S6>'   : 'simulink_model_closedloop/Publish1'
//  '<S7>'   : 'simulink_model_closedloop/Reference generator'
//  '<S8>'   : 'simulink_model_closedloop/Subscribe'
//  '<S9>'   : 'simulink_model_closedloop/Subscribe1'
//  '<S10>'  : 'simulink_model_closedloop/Reference generator/MATLAB Function'
//  '<S11>'  : 'simulink_model_closedloop/Reference generator/reference'
//  '<S12>'  : 'simulink_model_closedloop/Subscribe/Enabled Subsystem'
//  '<S13>'  : 'simulink_model_closedloop/Subscribe1/Enabled Subsystem'

#endif                               // RTW_HEADER_simulink_model_closedloop_h_

//
// File trailer for generated code.
//
// [EOF]
//
