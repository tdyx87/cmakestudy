#指定cmake最低版本
cmake_minimum_required(VERSION 2.6)
SET (CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/modules")
INCLUDE(AutoGroup)
src_auto_group(${CMAKE_CURRENT_SOURCE_DIR}/src/proj1 "src\\aaa\\bbb" src 111 modules build aaabbbb)
add_executable(${PROJECT_NAME} ${src})



