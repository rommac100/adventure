cmake_minimum_required(VERSION 3.3)
project(adventure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp room0.cpp room0.h main.h variables.cpp variables.h room1.cpp room1.h room4.cpp room4.h room3.cpp room3.h)
add_executable(adventure ${SOURCE_FILES})