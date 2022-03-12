cmake_minimum_required(VERSION 3.12)
project(hello)

add_library(hello SHARED hello.cpp)
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hello)
