cmake_minimum_required(VERSION 3.13)
project(zuul-cpp)
#set(CMAKE_CXX_STANDARD 14)
file(GLOB_RECURSE SRC "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")
file(GLOB_RECURSE HEADERS "${CMAKE_CURRENT_LIST_DIR}/headers/*.h")
#add_executable(zuul-cpp src/Main.cpp src/Look.cpp headers/Look.h src/Player.cpp headers/Player.h src/Go.cpp headers/Go.h src/Room.cpp headers/Room.h src/CommandInstantiator.cpp headers/CommandInstantiator.h headers/Command.h src/CSVReader.cpp headers/CSVReader.h src/CommandHandler.cpp headers/CommandHandler.h src/Game.cpp headers/Game.h src/Quit.cpp headers/Quit.h src/Command.cpp headers/ZuulServices.h src/ZuulServices.cpp headers/Take.h headers/Take.cpp)
add_executable(zuul-cpp ${SRC} ${HEADERS})

