cmake_minimum_required(VERSION 3.22)
project(cpprep)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpprep main.cpp triangle.cpp masterheader.h nameAndAge.cpp)
