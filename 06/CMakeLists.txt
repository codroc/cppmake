cmake_minimum_required(VERSION 3.12)
project(main)

add_subdirectory(hello)
add_subdirectory(log)

add_executable(main main.cpp)

target_link_libraries(main hello)
