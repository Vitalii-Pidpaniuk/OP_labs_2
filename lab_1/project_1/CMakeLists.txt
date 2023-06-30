cmake_minimum_required(VERSION 3.24)
project(project_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_1 main.cpp C_style.cpp C_style.h C++_style.cpp C++_style.h sequence_search.cpp sequence_search.h)
