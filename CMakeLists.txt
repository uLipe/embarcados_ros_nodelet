cmake_minimum_required(VERSION 2.8.3)
project(embarcados_ros_nodelet)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  nodelet
  roscpp
  std_msgs
  roslaunch
)

#adding launch files:
roslaunch_add_file_check(launch)

catkin_package(
  CATKIN_DEPENDS roscpp std_msgs nodelet roslaunch
)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)
add_library(embarcados_nodelet src/embarcados_nodelet.cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(
  embarcados_nodelet
  ${catkin_LIBRARIES}
)


