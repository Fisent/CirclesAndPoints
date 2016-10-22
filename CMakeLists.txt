cmake_minimum_required(VERSION 3.6)
project(CirclesAndPoints)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Circle.cpp Circle.h Point.cpp Point.h)
add_executable(CirclesAndPoints ${SOURCE_FILES})