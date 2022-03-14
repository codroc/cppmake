cmake_minimum_required(VERSION 3.12)
project(hello)

add_library(hello SHARED ${PROJECT_SOURCE_DIR}/src/hello.cpp)
target_include_directories(hello PUBLIC ${PROJECT_SOURCE_DIR}/include) # target_include_directories 后面的 PUBLIC 表示，任何
                                           # 引用了 hello 这个库的可执行文件或库 都默认共享 hello
                                           # include 的头文件
                                           # 相当于有传播的功能
# 添加 install 目标
install(TARGETS hello
    LIBRARY DESTINATION lib # ${CMAKE_INSTALL_PREFIX/lib}
    )
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
    DESTINATION include
    )

