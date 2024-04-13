#ifndef SIMULINK_MODEL_CLOSEDLOOP__VISIBILITY_CONTROL_H_
#define SIMULINK_MODEL_CLOSEDLOOP__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define SIMULINK_MODEL_CLOSEDLOOP_EXPORT __attribute__ ((dllexport))
    #define SIMULINK_MODEL_CLOSEDLOOP_IMPORT __attribute__ ((dllimport))
  #else
    #define SIMULINK_MODEL_CLOSEDLOOP_EXPORT __declspec(dllexport)
    #define SIMULINK_MODEL_CLOSEDLOOP_IMPORT __declspec(dllimport)
  #endif
  #ifdef SIMULINK_MODEL_CLOSEDLOOP_BUILDING_LIBRARY
    #define SIMULINK_MODEL_CLOSEDLOOP_PUBLIC SIMULINK_MODEL_CLOSEDLOOP_EXPORT
  #else
    #define SIMULINK_MODEL_CLOSEDLOOP_PUBLIC SIMULINK_MODEL_CLOSEDLOOP_IMPORT
  #endif
  #define SIMULINK_MODEL_CLOSEDLOOP_PUBLIC_TYPE SIMULINK_MODEL_CLOSEDLOOP_PUBLIC
  #define SIMULINK_MODEL_CLOSEDLOOP_LOCAL
#else
  #define SIMULINK_MODEL_CLOSEDLOOP_EXPORT __attribute__ ((visibility("default")))
  #define SIMULINK_MODEL_CLOSEDLOOP_IMPORT
  #if __GNUC__ >= 4
    #define SIMULINK_MODEL_CLOSEDLOOP_PUBLIC __attribute__ ((visibility("default")))
    #define SIMULINK_MODEL_CLOSEDLOOP_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define SIMULINK_MODEL_CLOSEDLOOP_PUBLIC
    #define SIMULINK_MODEL_CLOSEDLOOP_LOCAL
  #endif
  #define SIMULINK_MODEL_CLOSEDLOOP_PUBLIC_TYPE
#endif
#endif  // SIMULINK_MODEL_CLOSEDLOOP__VISIBILITY_CONTROL_H_
// Generated 11-Apr-2024 23:45:59
// Copyright 2019-2020 The MathWorks, Inc.