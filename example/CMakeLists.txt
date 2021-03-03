#指定cmake最低版本
cmake_minimum_required(VERSION 2.6)
#windows 解决方案的名称
project(demo1)
#windows(工程的名称) 生成执行文件的名称
add_executable(demo main.cpp)

add_executable(demo2 main.cpp)

add_subdirectory(subdir)


