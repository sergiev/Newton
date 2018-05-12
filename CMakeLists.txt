cmake_minimum_required(VERSION 3.9)
project(Newton)

set(CMAKE_CXX_STANDARD 17)

add_executable(Newton main.cpp refers.h matrix.cpp Gauss.cpp observed.cpp)