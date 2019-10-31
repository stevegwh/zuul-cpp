cmake_minimum_required(VERSION 3.13)
project(zuul-cpp)
set(CMAKE_CXX_STANDARD 14)
add_executable(zuul-cpp src/Main.cpp src/Look.cpp headers/Look.h src/Player.cpp src/Go.cpp)
