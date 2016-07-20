cmake_minimum_required(VERSION 3.5)
project(Mastermind_Solver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp definitions.h functions.cpp)
add_executable(Mastermind_Solver ${SOURCE_FILES})