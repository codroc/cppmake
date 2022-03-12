cmake_minimum_required(VERSION 3.12)

add_library(hello SHARED hello.cpp)
target_include_directories(hello PUBLIC .) # target_include_directories 后面的 PUBLIC 表示，任何
                                           # 引用了 hello 这个库的可执行文件或库 都默认共享 hello
                                           # include 的头文件
                                           # 相当于有传播的功能
