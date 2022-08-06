cmake_minimum_required(VERSION 3.5)
project(cook_cuisine)

set(SOURCE_FILES main.cc cook_cuisine.cc cook_cuisine_imp.cc)

set(CMAKE_CXX_STANDARD 11) # C++ 11

add_executable(cook ${SOURCE_FILES})