cmake_minimum_required(VERSION 3.23)
project(Learn_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Learn_CPP src/main.cpp src/math.cpp src/log.cpp src/vector.cpp)
add_executable(Learn_CPP_Test src/test.cpp)
include_directories(include)
