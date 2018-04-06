#!/bin/bash
echo "First arg: $1"
mkdir -p ~/rosiabb_ws/src/
cd $1
cp -r ros_packages/abb_driver ~/catkin_ws/src/
