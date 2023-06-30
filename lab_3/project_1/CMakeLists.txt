cmake_minimum_required(VERSION 3.24)
project(project_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_1 main.cpp functions.h functions.cpp student.cpp student.h)
