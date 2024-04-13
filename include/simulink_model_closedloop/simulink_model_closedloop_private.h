//
// File: simulink_model_closedloop_private.h
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
#ifndef RTW_HEADER_simulink_model_closedloop_private_h_
#define RTW_HEADER_simulink_model_closedloop_private_h_
#include "rtwtypes.h"
#include "simulink_model_closedloop_types.h"
#include "simulink_model_closedloop.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern "C" void acados_solver_sfunction_bicycle_model(SimStruct *rts);
extern "C" void acados_sim_solver_sfunction_bicycle_model(SimStruct *rts);

#endif                       // RTW_HEADER_simulink_model_closedloop_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
