cmake_minimum_required(VERSION 3.21)
project(practice)

set(CMAKE_CXX_STANDARD 11)

add_executable(practice main.cpp Calculator.cpp Calculator.h Vector3.cpp Vector3.h Target.cpp Target.h Rocket.cpp Rocket.h)
