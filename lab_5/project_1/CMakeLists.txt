cmake_minimum_required(VERSION 3.24)
project(project_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_1 main.cpp product.cpp product.h grocery_product.cpp grocery_product.h industrial_product.cpp industrial_product.h product.cpp function.cpp function.h)
