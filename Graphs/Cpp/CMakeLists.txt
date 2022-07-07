cmake_minimum_required(VERSION 3.5)
project(graphs_proj)

set(SOURCE_FILES main.cc graphs.cc)
set(CMAKE_BUILD_TYPE "Debug")

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
add_executable(graphs ${SOURCE_FILES})