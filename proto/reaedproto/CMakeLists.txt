cmake_minimum_required(VERSION 3.5)
project(a.out)

set(SOURCE_FILES ReadMain.cc common.pb.cc)

set(CMAKE_CXX_STANDARD 11) # C++ 11

add_executable(a.out ${SOURCE_FILES})
target_link_libraries(a.out -lprotoc -lprotobuf -lpthread)