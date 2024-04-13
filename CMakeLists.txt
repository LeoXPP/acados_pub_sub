cmake_minimum_required(VERSION 3.9)
project(simulink_model_closedloop)
set(CMAKE_VERBOSE_MAKEFILE ON)
# Set CMAKE_BUILD_TYPE
set(CMAKE_BUILD_TYPE Debug)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
# For Windows, MSVC compiler disable boost autolinking
add_definitions( -DBOOST_ALL_NO_LIB )
# And force all boost libraries to link dynamically
add_definitions( -DBOOST_ALL_DYN_LINK )
if(ALIAS_ROS1_CLASS_LOADER)
    add_definitions(-Dclass_loader=ros1_class_loader)
endif()
## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  geometry_msgs
  sensor_msgs
)
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
  CATKIN_DEPENDS
  geometry_msgs
  roscpp
  sensor_msgs
  std_msgs
  INCLUDE_DIRS include
)
###########
## Build ##
###########
## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  include
  ${PROJECT_SOURCE_DIR}
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
  "/c_generated_code"
  "/c_generated_code/bicycle_model_constraints"
  "/c_generated_code/bicycle_model_cost"
  "/c_generated_code/bicycle_model_model"
  "F:/acados_msvc/include"
  "F:/acados_msvc/include/blasfeo/include"
  "F:/acados_msvc/include/hpipm/include"
  "include/simulink_model_closedloop"
)
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set (CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
## Get list of .c files in project source directory
file(GLOB ${PROJECT_NAME}_C_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.c)
## Get list of .cpp files in project source directory
file(GLOB ${PROJECT_NAME}_CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.cpp)
add_library(coder_custom_lib_1 UNKNOWN IMPORTED)
set_property(TARGET coder_custom_lib_1 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/libacados.so")
add_library(coder_custom_lib_2 UNKNOWN IMPORTED)
set_property(TARGET coder_custom_lib_2 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/libblasfeo.so")
add_library(coder_custom_lib_3 UNKNOWN IMPORTED)
set_property(TARGET coder_custom_lib_3 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/libhpipm.so")
add_library(coder_custom_lib_4 UNKNOWN IMPORTED)
set_property(TARGET coder_custom_lib_4 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/libm.so")
# add_library(coder_custom_lib_5 UNKNOWN IMPORTED)
# set_property(TARGET coder_custom_lib_5 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/acados.lib")
# add_library(coder_custom_lib_6 UNKNOWN IMPORTED)
# set_property(TARGET coder_custom_lib_6 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/blasfeo.lib")
# add_library(coder_custom_lib_7 UNKNOWN IMPORTED)
# set_property(TARGET coder_custom_lib_7 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/src/hpipm.lib")
# Declare executable - Node
add_executable(simulink_model_closedloop
  src/acados_sim_solver_bicycle_model.c
  src/acados_sim_solver_sfunction_bicycle_model.c
  src/acados_solver_bicycle_model.c
  src/acados_solver_sfunction_bicycle_model.c
  src/bicycle_model_constr_h_fun.c
  src/bicycle_model_constr_h_fun_jac_uxt_zt.c
  src/bicycle_model_constr_h_fun_jac_uxt_zt_hess.c
  src/bicycle_model_expl_ode_fun.c
  src/bicycle_model_expl_ode_hess.c
  src/bicycle_model_expl_vde_adj.c
  src/bicycle_model_expl_vde_forw.c
  src/main.cpp
  src/rosnodeinterface.cpp
  src/rtGetInf.cpp
  src/rtGetNaN.cpp
  src/rt_nonfinite.cpp
  src/simulink_model_closedloop.cpp
  src/simulink_model_closedloop_data.cpp
  src/slros_busmsg_conversion.cpp
  src/slros_initialize.cpp
  src/rt_matrx.c
  src/rt_printf.c
  src/slros_generic_param.cpp
)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
#target_compile_options(simulink_model_closedloop PUBLIC  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>: -Wall -Wextra -Wpedantic >)
endif()
target_compile_options(simulink_model_closedloop PUBLIC 
  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>:
  -DMODEL=simulink_model_closedloop
  -DNUMST=1
  -DNCSTATES=0
  -DHAVESTDIO
  -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0
  -DCLASSIC_INTERFACE=0
  -DALLOCATIONFCN=0
  -DUSE_RTMODEL
  -DERT
  -DTID01EQ=0
  -DTERMFCN=1
  -DONESTEPFCN=1
  -DMAT_FILE=0
  -DMULTI_INSTANCE_CODE=1
  -DINTEGER_CODE=0
  -DMT=0
  -DROS_PROJECT
  -DMW_SCHED_OTHER
  -DSTACK_SIZE=64
  -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__
  -DRT=RT
     -fpermissive  >
  )
## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
add_dependencies(
  simulink_model_closedloop
  ${catkin_EXPORTED_TARGETS}
)
target_include_directories(simulink_model_closedloop PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
## Specify libraries to link a library or executable target against
target_link_libraries(
  simulink_model_closedloop 
    coder_custom_lib_1
    coder_custom_lib_2
    coder_custom_lib_3
    coder_custom_lib_4
    # coder_custom_lib_5
    # coder_custom_lib_6
    # coder_custom_lib_7
    ${catkin_LIBRARIES}
    ${Boost_LIBRARIES}
    ${CMAKE_DL_LIBS}
)
install(TARGETS simulink_model_closedloop
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})
foreach(file_i ${CUDA_BINS})
add_custom_command(
                   TARGET simulink_model_closedloop
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CATKIN_DEVEL_PREFIX}/codegen/exe/simulink_model_closedloop/${file_i}
				   )
add_custom_command(
                   TARGET simulink_model_closedloop
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CATKIN_DEVEL_PREFIX}/simulink_model_closedloop_ert_rtw/${file_i}
				   )
endforeach(file_i)
# Generated on Thu Apr 11 23:45:59 2024
