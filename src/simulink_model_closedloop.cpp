//
// File: simulink_model_closedloop.cpp
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
#include <string.h>
#include "rtwtypes.h"
#include "simulink_model_closedloop_types.h"
#include "simulink_model_closedloop_private.h"

extern "C"
{

#include "rt_nonfinite.h"

}

// Model step function
void simulink_model_closedloop::step()
{
  SL_Bus_simulink_model_closedloop_geometry_msgs_Point rtb_BusAssignment;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S9>/SourceBlock'
  b_varargout_1 = Sub_simulink_model_closedloop_166.getLatestMessage
    (&simulink_model_closedloop_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem1' incorporates:
  //   EnablePort: '<S4>/Enable'

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S4>/In1'
    simulink_model_closedloop_B.In1_g =
      simulink_model_closedloop_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Enabled Subsystem1'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.X =
    simulink_model_closedloop_B.In1_g.Orientation.X;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.Y =
    simulink_model_closedloop_B.In1_g.Orientation.Y;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.X_h =
    simulink_model_closedloop_B.In1_g.AngularVelocity.X;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.Y_i =
    simulink_model_closedloop_B.In1_g.AngularVelocity.Y;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.Z =
    simulink_model_closedloop_B.In1_g.AngularVelocity.Z;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.X_hw =
    simulink_model_closedloop_B.In1_g.LinearAcceleration.X;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.Y_in =
    simulink_model_closedloop_B.In1_g.LinearAcceleration.Y;

  // SignalConversion generated from: '<Root>/Bus Selector1'
  simulink_model_closedloop_B.Z_n =
    simulink_model_closedloop_B.In1_g.LinearAcceleration.Z;

  // Constant: '<Root>/y_ref_0'
  memcpy(&simulink_model_closedloop_B.y_ref_0[0],
         &simulink_model_closedloop_P.y_ref_0_Value[0], 10U * sizeof(real_T));
  for (int32_T i = 0; i < 490; i++) {
    // MATLAB Function: '<S7>/reference'
    simulink_model_closedloop_B.yref[i] = 0.0;
  }

  // MATLAB Function: '<S7>/reference' incorporates:
  //   SignalConversion generated from: '<S11>/ SFunction '

  for (int32_T i = 0; i < 49; i++) {
    simulink_model_closedloop_B.yref[i * 10 + 5] =
      ((simulink_model_closedloop_B.X_hw + 3.0) -
       simulink_model_closedloop_B.X_hw) * (static_cast<real_T>(i) + 1.0) / 50.0
      + simulink_model_closedloop_B.X_hw;
  }

  simulink_model_closedloop_B.yref_N[0] = 0.0;
  simulink_model_closedloop_B.yref_N[1] = 0.0;
  simulink_model_closedloop_B.yref_N[2] = 0.0;
  simulink_model_closedloop_B.yref_N[3] = 0.0;
  simulink_model_closedloop_B.yref_N[4] = 0.0;
  simulink_model_closedloop_B.yref_N[5] = simulink_model_closedloop_B.X_hw + 3.0;
  simulink_model_closedloop_B.yref_N[6] = 0.0;
  simulink_model_closedloop_B.yref_N[7] = 0.0;

  // Constant: '<Root>/lbx'
  memcpy(&simulink_model_closedloop_B.lbx[0],
         &simulink_model_closedloop_P.lbx_Value[0], 196U * sizeof(real_T));

  // Constant: '<Root>/ubx'
  memcpy(&simulink_model_closedloop_B.ubx[0],
         &simulink_model_closedloop_P.ubx_Value[0], 196U * sizeof(real_T));

  // Constant: '<Root>/lbu'
  memcpy(&simulink_model_closedloop_B.lbu[0],
         &simulink_model_closedloop_P.lbu_Value[0], 100U * sizeof(real_T));

  // Constant: '<Root>/ubu'
  memcpy(&simulink_model_closedloop_B.ubu[0],
         &simulink_model_closedloop_P.ubu_Value[0], 100U * sizeof(real_T));

  // Constant: '<Root>/lh'
  memcpy(&simulink_model_closedloop_B.lh[0],
         &simulink_model_closedloop_P.lh_Value[0], 100U * sizeof(real_T));

  // Constant: '<Root>/uh'
  memcpy(&simulink_model_closedloop_B.uh[0],
         &simulink_model_closedloop_P.uh_Value[0], 100U * sizeof(real_T));

  // S-Function (acados_solver_sfunction_bicycle_model): '<Root>/S-Function1'

  // Level2 S-Function Block: '<Root>/S-Function1' (acados_solver_sfunction_bicycle_model) 
  {
    SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S8>/SourceBlock'
  b_varargout_1 = Sub_simulink_model_closedloop_136.getLatestMessage
    (&rtb_BusAssignment);

  // Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S3>/Enable'

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S3>/In1'
    simulink_model_closedloop_B.In1_g2 = rtb_BusAssignment;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Delay: '<Root>/Delay1'
  memcpy(&simulink_model_closedloop_B.u0_b[0],
         &simulink_model_closedloop_DW.Delay1_DSTATE[0], sizeof(real_T) << 3U);

  // S-Function (acados_sim_solver_sfunction_bicycle_model): '<Root>/S-Function' 

  // Level2 S-Function Block: '<Root>/S-Function' (acados_sim_solver_sfunction_bicycle_model) 
  {
    SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<S2>/Constant'

  simulink_model_closedloop_B.BusAssignment1 =
    simulink_model_closedloop_P.Constant_Value;
  simulink_model_closedloop_B.BusAssignment1.Orientation.X =
    simulink_model_closedloop_B.x[0];
  simulink_model_closedloop_B.BusAssignment1.Orientation.Y =
    simulink_model_closedloop_B.x[1];
  simulink_model_closedloop_B.BusAssignment1.AngularVelocity.X =
    simulink_model_closedloop_B.x[2];
  simulink_model_closedloop_B.BusAssignment1.AngularVelocity.Y =
    simulink_model_closedloop_B.x[3];
  simulink_model_closedloop_B.BusAssignment1.AngularVelocity.Z =
    simulink_model_closedloop_B.x[4];
  simulink_model_closedloop_B.BusAssignment1.LinearAcceleration.X =
    simulink_model_closedloop_B.x[5];
  simulink_model_closedloop_B.BusAssignment1.LinearAcceleration.Y =
    simulink_model_closedloop_B.x[6];
  simulink_model_closedloop_B.BusAssignment1.LinearAcceleration.Z =
    simulink_model_closedloop_B.x[7];

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_simulink_model_closedloop_150.publish
    (&simulink_model_closedloop_B.BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  rtb_BusAssignment = simulink_model_closedloop_P.Constant_Value_l;
  rtb_BusAssignment.X = simulink_model_closedloop_B.u0[0];
  rtb_BusAssignment.Y = simulink_model_closedloop_B.u0[1];

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_simulink_model_closedloop_135.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update for Delay: '<Root>/Delay1'
  memcpy(&simulink_model_closedloop_DW.Delay1_DSTATE[0],
         &simulink_model_closedloop_B.x[0], sizeof(real_T) << 3U);

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  (&simulink_model_closedloop_M)->Timing.t[0] =
    ((time_T)(++(&simulink_model_closedloop_M)->Timing.clockTick0)) *
    (&simulink_model_closedloop_M)->Timing.stepSize0;
}

// Model initialize function
void simulink_model_closedloop::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&(&simulink_model_closedloop_M)->solverInfo,
                    "FixedStepDiscrete");
  (&simulink_model_closedloop_M)->solverInfoPtr =
    (&(&simulink_model_closedloop_M)->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap = (&simulink_model_closedloop_M)
      ->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    // polyspace +2 MISRA2012:D4.1 [Justified:Low] "(&simulink_model_closedloop_M) points to
    // static memory which is guaranteed to be non-NULL"
    (&simulink_model_closedloop_M)->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    (&simulink_model_closedloop_M)->Timing.sampleTimes =
      (&(&simulink_model_closedloop_M)->Timing.sampleTimesArray[0]);
    (&simulink_model_closedloop_M)->Timing.offsetTimes =
      (&(&simulink_model_closedloop_M)->Timing.offsetTimesArray[0]);

    // task periods
    (&simulink_model_closedloop_M)->Timing.sampleTimes[0] = (0.02);

    // task offsets
    (&simulink_model_closedloop_M)->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr((&simulink_model_closedloop_M), &(&simulink_model_closedloop_M)
             ->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = (&simulink_model_closedloop_M)->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    (&simulink_model_closedloop_M)->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal((&simulink_model_closedloop_M), -1);
  (&simulink_model_closedloop_M)->Timing.stepSize0 = 0.02;
  (&simulink_model_closedloop_M)->solverInfoPtr =
    (&(&simulink_model_closedloop_M)->solverInfo);
  (&simulink_model_closedloop_M)->Timing.stepSize = (0.02);
  rtsiSetFixedStepSize(&(&simulink_model_closedloop_M)->solverInfo, 0.02);
  rtsiSetSolverMode(&(&simulink_model_closedloop_M)->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo = &(&simulink_model_closedloop_M)
      ->NonInlinedSFcns.sfcnInfo;
    (&simulink_model_closedloop_M)->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      ((&simulink_model_closedloop_M))));
    (&simulink_model_closedloop_M)->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &(&simulink_model_closedloop_M)
      ->Sizes.numSampTimes);
    (&simulink_model_closedloop_M)->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr((&simulink_model_closedloop_M))[0]);
    rtssSetTPtrPtr(sfcnInfo,(&simulink_model_closedloop_M)
                   ->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart((&simulink_model_closedloop_M)));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal((&simulink_model_closedloop_M)));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      ((&simulink_model_closedloop_M)));
    rtssSetStepSizePtr(sfcnInfo, &(&simulink_model_closedloop_M)
                       ->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      ((&simulink_model_closedloop_M)));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &(&simulink_model_closedloop_M)
      ->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &(&simulink_model_closedloop_M)
      ->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &(&simulink_model_closedloop_M)->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &(&simulink_model_closedloop_M)
                         ->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &(&simulink_model_closedloop_M)
      ->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &(&simulink_model_closedloop_M)->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &(&simulink_model_closedloop_M)
                         ->solverInfoPtr);
  }

  (&simulink_model_closedloop_M)->Sizes.numSFcns = (2);

  // register each child
  {
    (void) memset(static_cast<void *>(&(&simulink_model_closedloop_M)
      ->NonInlinedSFcns.childSFunctions[0]), 0,
                  2*sizeof(SimStruct));
    (&simulink_model_closedloop_M)->childSfunctions =
      (&(&simulink_model_closedloop_M)->NonInlinedSFcns.childSFunctionPtrs[0]);
    (&simulink_model_closedloop_M)->childSfunctions[0] =
      (&(&simulink_model_closedloop_M)->NonInlinedSFcns.childSFunctions[0]);
    (&simulink_model_closedloop_M)->childSfunctions[1] =
      (&(&simulink_model_closedloop_M)->NonInlinedSFcns.childSFunctions[1]);

    // Level2 S-Function Block: simulink_model_closedloop/<Root>/S-Function1 (acados_solver_sfunction_bicycle_model) 
    {
      SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod = (&simulink_model_closedloop_M)
        ->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = (&simulink_model_closedloop_M)
        ->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = (&simulink_model_closedloop_M)
        ->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset(static_cast<void*>(sfcnPeriod), 0,
                    sizeof(time_T)*1);
      (void) memset(static_cast<void*>(sfcnOffset), 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &(&simulink_model_closedloop_M)
                         ->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts, &(&simulink_model_closedloop_M)
        ->NonInlinedSFcns.inputOutputPortInfo2[0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, (&simulink_model_closedloop_M)->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts, &(&simulink_model_closedloop_M)
                           ->NonInlinedSFcns.methods2[0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts, &(&simulink_model_closedloop_M)
                           ->NonInlinedSFcns.methods3[0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts, &(&simulink_model_closedloop_M)
                           ->NonInlinedSFcns.methods4[0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts, &(&simulink_model_closedloop_M)
                         ->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 11);
        ssSetPortInfoForInputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &simulink_model_closedloop_B.X;
          sfcnUPtrs[1] = &simulink_model_closedloop_B.Y;
          sfcnUPtrs[2] = &simulink_model_closedloop_B.X_h;
          sfcnUPtrs[3] = &simulink_model_closedloop_B.Y_i;
          sfcnUPtrs[4] = &simulink_model_closedloop_B.Z;
          sfcnUPtrs[5] = &simulink_model_closedloop_B.X_hw;
          sfcnUPtrs[6] = &simulink_model_closedloop_B.Y_in;
          sfcnUPtrs[7] = &simulink_model_closedloop_B.Z_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 8);
        }

        // port 1
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &simulink_model_closedloop_B.X;
          sfcnUPtrs[1] = &simulink_model_closedloop_B.Y;
          sfcnUPtrs[2] = &simulink_model_closedloop_B.X_h;
          sfcnUPtrs[3] = &simulink_model_closedloop_B.Y_i;
          sfcnUPtrs[4] = &simulink_model_closedloop_B.Z;
          sfcnUPtrs[5] = &simulink_model_closedloop_B.X_hw;
          sfcnUPtrs[6] = &simulink_model_closedloop_B.Y_in;
          sfcnUPtrs[7] = &simulink_model_closedloop_B.Z_n;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 8);
        }

        // port 2
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs2;

          {
            int_T i1;
            const real_T *u2 = simulink_model_closedloop_B.y_ref_0;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u2[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 10);
        }

        // port 3
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs3;

          {
            int_T i1;
            const real_T *u3 = simulink_model_closedloop_B.yref;
            for (i1=0; i1 < 490; i1++) {
              sfcnUPtrs[i1] = &u3[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 490);
        }

        // port 4
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs4;

          {
            int_T i1;
            const real_T *u4 = simulink_model_closedloop_B.yref_N;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = &u4[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 8);
        }

        // port 5
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs5;

          {
            int_T i1;
            const real_T *u5 = simulink_model_closedloop_B.lbx;
            for (i1=0; i1 < 196; i1++) {
              sfcnUPtrs[i1] = &u5[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 196);
        }

        // port 6
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs6;

          {
            int_T i1;
            const real_T *u6 = simulink_model_closedloop_B.ubx;
            for (i1=0; i1 < 196; i1++) {
              sfcnUPtrs[i1] = &u6[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 196);
        }

        // port 7
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs7;

          {
            int_T i1;
            const real_T *u7 = simulink_model_closedloop_B.lbu;
            for (i1=0; i1 < 100; i1++) {
              sfcnUPtrs[i1] = &u7[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 100);
        }

        // port 8
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs8;

          {
            int_T i1;
            const real_T *u8 = simulink_model_closedloop_B.ubu;
            for (i1=0; i1 < 100; i1++) {
              sfcnUPtrs[i1] = &u8[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 100);
        }

        // port 9
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs9;

          {
            int_T i1;
            const real_T *u9 = simulink_model_closedloop_B.lh;
            for (i1=0; i1 < 100; i1++) {
              sfcnUPtrs[i1] = &u9[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 100);
        }

        // port 10
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn0.UPtrs10;

          {
            int_T i1;
            const real_T *u10 = simulink_model_closedloop_B.uh;
            for (i1=0; i1 < 100; i1++) {
              sfcnUPtrs[i1] = &u10[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidthAsInt(rts, 10, 100);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);
        _ssSetPortInfo2ForOutputUnits(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        ssSetOutputPortUnit(rts, 6, 0);
        ssSetOutputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 6, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 7, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            simulink_model_closedloop_B.u0));
        }

        // port 1
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 408);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            simulink_model_closedloop_B.SFunction1_o2));
        }

        // port 2
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidthAsInt(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &simulink_model_closedloop_B.SFunction1_o3));
        }

        // port 3
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidthAsInt(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &simulink_model_closedloop_B.SFunction1_o4));
        }

        // port 4
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidthAsInt(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &simulink_model_closedloop_B.SFunction1_o5));
        }

        // port 5
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidthAsInt(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            simulink_model_closedloop_B.SFunction1_o6));
        }

        // port 6
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidthAsInt(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            &simulink_model_closedloop_B.SFunction1_o7));
        }

        // port 7
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidthAsInt(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real_T *)
            &simulink_model_closedloop_B.SFunction1_o8));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function1");
      ssSetPath(rts, "simulink_model_closedloop/S-Function1");
      ssSetRTModel(rts,(&simulink_model_closedloop_M));
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // registration
      acados_solver_sfunction_bicycle_model(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCsAsInt(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 0);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 0);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
    }

    // Level2 S-Function Block: simulink_model_closedloop/<Root>/S-Function (acados_sim_solver_sfunction_bicycle_model) 
    {
      SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod = (&simulink_model_closedloop_M)
        ->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = (&simulink_model_closedloop_M)
        ->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = (&simulink_model_closedloop_M)
        ->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset(static_cast<void*>(sfcnPeriod), 0,
                    sizeof(time_T)*1);
      (void) memset(static_cast<void*>(sfcnOffset), 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &(&simulink_model_closedloop_M)
                         ->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts, &(&simulink_model_closedloop_M)
        ->NonInlinedSFcns.inputOutputPortInfo2[1]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, (&simulink_model_closedloop_M)->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts, &(&simulink_model_closedloop_M)
                           ->NonInlinedSFcns.methods2[1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts, &(&simulink_model_closedloop_M)
                           ->NonInlinedSFcns.methods3[1]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts, &(&simulink_model_closedloop_M)
                           ->NonInlinedSFcns.methods4[1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts, &(&simulink_model_closedloop_M)
                         ->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn1.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = simulink_model_closedloop_B.u0_b;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 8);
        }

        // port 1
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &(&simulink_model_closedloop_M)->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &simulink_model_closedloop_B.In1_g2.X;
          sfcnUPtrs[1] = &simulink_model_closedloop_B.In1_g2.Y;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 2);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts, &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &(&simulink_model_closedloop_M)
          ->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 8);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            simulink_model_closedloop_B.x));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "simulink_model_closedloop/S-Function");
      ssSetRTModel(rts,(&simulink_model_closedloop_M));
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // registration
      acados_sim_solver_sfunction_bicycle_model(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCsAsInt(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  {
    char_T b_zeroDelimTopic[12];
    char_T b_zeroDelimTopic_1[12];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_2[10];
    static const char_T tmp[11] = { '/', 'r', 'o', 's', 'o', 'u', 't', '_', 'x',
      'i', 'e' };

    static const char_T tmp_0[9] = { '/', 'm', 'y', '_', 't', 'o', 'p', 'i', 'c'
    };

    // Start for Constant: '<Root>/y_ref_0'
    memcpy(&simulink_model_closedloop_B.y_ref_0[0],
           &simulink_model_closedloop_P.y_ref_0_Value[0], 10U * sizeof(real_T));

    // Start for Constant: '<Root>/lbx'
    memcpy(&simulink_model_closedloop_B.lbx[0],
           &simulink_model_closedloop_P.lbx_Value[0], 196U * sizeof(real_T));

    // Start for Constant: '<Root>/ubx'
    memcpy(&simulink_model_closedloop_B.ubx[0],
           &simulink_model_closedloop_P.ubx_Value[0], 196U * sizeof(real_T));

    // Start for Constant: '<Root>/lbu'
    memcpy(&simulink_model_closedloop_B.lbu[0],
           &simulink_model_closedloop_P.lbu_Value[0], 100U * sizeof(real_T));

    // Start for Constant: '<Root>/ubu'
    memcpy(&simulink_model_closedloop_B.ubu[0],
           &simulink_model_closedloop_P.ubu_Value[0], 100U * sizeof(real_T));

    // Start for Constant: '<Root>/lh'
    memcpy(&simulink_model_closedloop_B.lh[0],
           &simulink_model_closedloop_P.lh_Value[0], 100U * sizeof(real_T));

    // Start for Constant: '<Root>/uh'
    memcpy(&simulink_model_closedloop_B.uh[0],
           &simulink_model_closedloop_P.uh_Value[0], 100U * sizeof(real_T));

    // Start for S-Function (acados_solver_sfunction_bicycle_model): '<Root>/S-Function1' 
    // Level2 S-Function Block: '<Root>/S-Function1' (acados_solver_sfunction_bicycle_model) 
    {
      SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for S-Function (acados_sim_solver_sfunction_bicycle_model): '<Root>/S-Function' 
    // Level2 S-Function Block: '<Root>/S-Function' (acados_sim_solver_sfunction_bicycle_model) 
    {
      SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // InitializeConditions for Delay: '<Root>/Delay1'
    memcpy(&simulink_model_closedloop_DW.Delay1_DSTATE[0],
           &simulink_model_closedloop_P.Delay1_InitialCondition[0], sizeof
           (real_T) << 3U);

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   MATLABSystem: '<S6>/SinkBlock'

    simulink_model_closedloop_DW.obj_n.matlabCodegenIsDeleted = false;
    simulink_model_closedloop_DW.obj_n.isInitialized = 1;

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_1[i] = tmp[i];
    }

    b_zeroDelimTopic_1[11] = '\x00';

    // End of SystemInitialize for SubSystem: '<Root>/Publish1'
    for (int32_T i = 0; i < 12; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_simulink_model_closedloop_166.createSubscriber(&b_zeroDelimTopic[0], 1);
    simulink_model_closedloop_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S4>/In1' incorporates:
    //   Outport: '<S4>/input_array'

    simulink_model_closedloop_B.In1_g =
      simulink_model_closedloop_P.input_array_Y0;

    // End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S8>/SourceBlock' incorporates:
    //   MATLABSystem: '<S5>/SinkBlock'

    simulink_model_closedloop_DW.obj_e.matlabCodegenIsDeleted = false;
    simulink_model_closedloop_DW.obj_e.isInitialized = 1;

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_2[i] = tmp_0[i];
    }

    b_zeroDelimTopic_2[9] = '\x00';

    // End of SystemInitialize for SubSystem: '<Root>/Publish'
    for (int32_T i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Sub_simulink_model_closedloop_136.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    simulink_model_closedloop_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S3>/In1' incorporates:
    //   Outport: '<S3>/Out1'

    simulink_model_closedloop_B.In1_g2 = simulink_model_closedloop_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    simulink_model_closedloop_DW.obj.matlabCodegenIsDeleted = false;
    simulink_model_closedloop_DW.obj.isInitialized = 1;
    Pub_simulink_model_closedloop_150.createPublisher(&b_zeroDelimTopic_1[0], 1);
    simulink_model_closedloop_DW.obj.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    simulink_model_closedloop_DW.obj_m.matlabCodegenIsDeleted = false;
    simulink_model_closedloop_DW.obj_m.isInitialized = 1;
    Pub_simulink_model_closedloop_135.createPublisher(&b_zeroDelimTopic_2[0], 1);
    simulink_model_closedloop_DW.obj_m.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void simulink_model_closedloop::terminate()
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!simulink_model_closedloop_DW.obj_n.matlabCodegenIsDeleted) {
    simulink_model_closedloop_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for S-Function (acados_solver_sfunction_bicycle_model): '<Root>/S-Function1' 
  // Level2 S-Function Block: '<Root>/S-Function1' (acados_solver_sfunction_bicycle_model) 
  {
    SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!simulink_model_closedloop_DW.obj_e.matlabCodegenIsDeleted) {
    simulink_model_closedloop_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for S-Function (acados_sim_solver_sfunction_bicycle_model): '<Root>/S-Function' 
  // Level2 S-Function Block: '<Root>/S-Function' (acados_sim_solver_sfunction_bicycle_model) 
  {
    SimStruct *rts = (&simulink_model_closedloop_M)->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!simulink_model_closedloop_DW.obj.matlabCodegenIsDeleted) {
    simulink_model_closedloop_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!simulink_model_closedloop_DW.obj_m.matlabCodegenIsDeleted) {
    simulink_model_closedloop_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

// Constructor
simulink_model_closedloop::simulink_model_closedloop() :
  simulink_model_closedloop_B(),
  simulink_model_closedloop_DW(),
  simulink_model_closedloop_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
simulink_model_closedloop::~simulink_model_closedloop()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
simulink_model_closedloop::RT_MODEL_simulink_model_closedloop_T
  * simulink_model_closedloop::getRTM()
{
  return (&simulink_model_closedloop_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
