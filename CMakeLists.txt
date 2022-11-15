cmake_minimum_required(VERSION 3.23)
project(Learn_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Learn_CPP src/Main.cpp src/Math.cpp src/Log.cpp src/Vector.cpp)
add_executable(Learn_CPP_Test src/Test.cpp)
include_directories(include)
