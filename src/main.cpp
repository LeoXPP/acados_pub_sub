//
// File main.cpp
//
// Code generated for Simulink model 'simulink_model_closedloop'.
//
// Model version                  : 20.15
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Apr 11 23:45:37 2024
//

#include <stdio.h>
#include "rosnodeinterface.h"
#include "slros_initialize.h"

extern void slros_node_init(int argc, char** argv);
namespace ros
{
  namespace matlab
  {
    std::shared_ptr<ros::matlab::NodeInterface> gMatlabNodeIntr;
    std::shared_ptr<ros::matlab::NodeInterface> getNodeInterface()
    {
      return gMatlabNodeIntr;
    }
  }                                    //namespace matlab
}                                      //namespace ros

int main(int argc, char* argv[])  
{  
  // 初始化ROS节点，使用从命令行传入的参数  
  slros_node_init(argc, argv);  
  
  // 创建一个MATLAB与ROS集成的NodeInterface的共享指针  
  ros::matlab::gMatlabNodeIntr = std::make_shared<ros::matlab::NodeInterface>();  
  
  // 使用从命令行传入的参数初始化MATLAB的NodeInterface  
  ros::matlab::gMatlabNodeIntr->initialize(argc, argv);  
  
  // 运行MATLAB的NodeInterface，并获取其返回值  
  auto ret = ros::matlab::gMatlabNodeIntr->run();  
  
  // 终止MATLAB的NodeInterface  
  ros::matlab::gMatlabNodeIntr->terminate();  
  
  // 重置共享指针，释放其指向的内存  
  ros::matlab::gMatlabNodeIntr.reset();  
  
  // 返回MATLAB的NodeInterface的返回值，通常用于表示程序是否成功执行  
  return ret;  
}
