cmake_minimum_required(VERSION 3.12)
project(find_package)

add_executable(main main.cpp)

find_package(GTest REQUIRED)
if(GTest_FOUND)
    target_include_directories(main PUBLIC ${GTEST_INCLUDE_DIRS})
    target_link_libraries(main PUBLIC ${GTEST_LIBRARIES} pthread)
else(GTest_FOUND)
    message(FATAL_ERROR "gtest not found!")
endif(GTest_FOUND)
