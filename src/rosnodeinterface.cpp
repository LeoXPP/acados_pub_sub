//
// File rosnodeinterface.cpp
//
// Code generated for Simulink model 'simulink_model_closedloop'.
//
// Model version                  : 20.15
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Apr 11 23:45:36 2024
//

#ifdef _MSC_VER

#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)

#else

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"

#endif                                 //_MSC_VER

#include "simulink_model_closedloop.h"
#include "rosnodeinterface.h"
#include <thread>
#include <chrono>
#include <utility>

namespace ros
{
  namespace matlab
  {
    NodeInterface::NodeInterface()
      : mNode()
      , mModel()
      , mBaseRateSem()
      , mBaseRateThread()
      , mSchedulerThread()
      , mStopSem()
      , mRunModel(true)
    {
    }

    NodeInterface::~NodeInterface()
    {
      terminate();
    }

    void NodeInterface::initialize(int argc, char ** argv)  
{  
  try {  
    // 创建一个ROS节点句柄的共享指针  
    mNode = std::make_shared<ros::NodeHandle>();  
  
    // 输出ROS信息日志，表明模型"simulink_model_closedloop"开始运行  
    ROS_INFO("** Starting the model \"simulink_model_closedloop\" **\n");  
  
    // 初始化Simulink模型，这会创建发布者和订阅者  
    mModel = std::make_shared<simulink_model_closedloop>();  
  
    // 设置Simulink模型的实时任务管理器的错误状态为NULL（表示无错误）  
    rtmSetErrorStatus(mModel->getRTM(), (NULL));  
  
    // 初始化Simulink模型  
    mModel->initialize();  
  
    // 为模型中的基本速率创建一个线程  
    mBaseRateThread = std::make_shared<std::thread>(&NodeInterface::  
      baseRateTask, this);  
  
    // 创建一个调度器线程  
    mSchedulerThread = std::make_shared<std::thread>(&NodeInterface::  
      schedulerThread, this);  
  } catch (std::exception& ex) {  
    // 如果在初始化过程中抛出异常，捕获它并输出错误信息  
    std::cout << ex.what() << std::endl;  
  
    // 重新抛出捕获的异常，以便在调用栈的更高层处理  
    throw ex;  
  }  
}

    int NodeInterface::run()
    {
      ros::spin();
      mRunModel = false;
      return 0;
    }

    boolean_T NodeInterface::getStopRequestedFlag(void)
    {

#ifndef rtmGetStopRequested

      return (!(rtmGetErrorStatus(mModel->getRTM())
                == (NULL)));

#else

      return (!(rtmGetErrorStatus(mModel->getRTM())
                == (NULL)) || rtmGetStopRequested(mModel->getRTM()));

#endif

    }

    void NodeInterface::terminate(void)
    {
      if (mBaseRateThread.get()) {
        mBaseRateSem.notify();
        mBaseRateThread->join();
        mRunModel = false;
        mBaseRateThread.reset();
        if (mSchedulerThread.get()) {
          mSchedulerThread->join();
          mSchedulerThread.reset();
        }

        if (mModel.get()) {
          mModel->terminate();
        }

        mNode.reset();
      }
    }

    //
    // Scheduler Task using ROS Wall clock timer to run base-rate
    //
    void NodeInterface::schedulerThread(void)
    {
      while (mRunModel) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(20000000));
        mBaseRateSem.notify();
      }
    }

    // Base-rate task
    void NodeInterface::baseRateTask(void)
    {
      mRunModel = (rtmGetErrorStatus(mModel->getRTM()) ==
                   (NULL));
      while (mRunModel) {
        mBaseRateSem.wait();

#ifdef MW_DEBUG_LOG

        ROS_INFO("** Base rate task semaphore received\n");

#endif

        if (!mRunModel)
          break;
        mModel->step();
        mRunModel = !NodeInterface::getStopRequestedFlag();
      }

      // Shutdown the ROS node
      ros::shutdown();
    }
  }                                    //namespace matlab
}                                      //namespace ros

#ifdef _MSC_VER

#pragma warning(pop)

#else

#pragma GCC diagnostic pop

#endif                                 //_MSC_VER
