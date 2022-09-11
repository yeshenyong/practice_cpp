cmake_minimum_required(VERSION 3.16)

project(lock)
# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11) # C++ 11

# set( PRJ_SRC_LIST )
# set( PRJ_HEADER_LIST )

# file( GLOB root_src_files "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")
# file( GLOB root_header_files "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

# list( APPEND PRJ_SRC_LIST ${root_src_files})
# list( APPEND PRJ_HEADER_LIST ${root_header_files})

set(SOURCE_FILES dw_lock.cc main.cc)
# 设置编译选项
# 允许c++11标准、O3优化、多线程。match选项可避免一些cpu上的问题
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native -O3")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} pthread boost_thread)