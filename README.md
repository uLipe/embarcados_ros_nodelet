Embarcados ROS Nodelet
======================

This repository contains a simple example on how to setup a ROS package to use 
the ROS nodelets, which are intended to use with robotics application starved 
by CPU bandwidht such video or real-time control

# How to build:
After you setup ROS on your machine and created a catkin workspace, you need to clone this
repo as stated below inside of workspace's <b>src</b> folder:      
 ```
    $ git clone https://github.com/uLipe/embarcados_ros_nodelet.git
 ```
Once cloned just build the package see the example below :
```
    $ catkin_make 
```
Source the environment with the new package built:
```
    $ source devel/setup.bash 
```
And play with this nodelet using roslaunch:

```
    $ roslaunch embarcados_ros_nodelet embarcados_ros_nodelet.launch
```
...and then, have fun and improve it with your own nodelets.

# Having troubles?
If you're suffering problems please drop me a mail at: ryukokki.felipe@gmail.com 

