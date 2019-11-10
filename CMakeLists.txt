cmake_minimum_required(VERSION 3.13)
project(zuul-cpp)
set(CMAKE_CXX_STANDARD 14)
add_executable(zuul-cpp src/Main.cpp src/Look.cpp headers/Look.h src/Player.cpp headers/Player.h src/Go.cpp headers/Go.h src/Room.cpp headers/Room.h src/CommandInstantiator.cpp headers/CommandInstantiator.h headers/Command.h src/CSVReader.cpp headers/CSVReader.h)
