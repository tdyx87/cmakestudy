#指定cmake最低版本
cmake_minimum_required(VERSION 2.6)
#windows 解决方案的名称
project(demo1)

MESSAGE(STATUS CMAKE_BINARY_DIR:${CMAKE_BINARY_DIR})
MESSAGE(STATUS PROJECT_BINARY_DIR :${PROJECT_BINARY_DIR})
MESSAGE(STATUS PROJECT_SOURCE_DIR:${PROJECT_SOURCE_DIR})
MESSAGE(STATUS EXECUTABLE_OUTPUT_PATH :${EXECUTABLE_OUTPUT_PATH})
MESSAGE(STATUS LIBRARY_OUTPUT_PATH :${LIBRARY_OUTPUT_PATH})
MESSAGE(STATUS CMAKE_SOURCE_DIR :${CMAKE_SOURCE_DIR})
MESSAGE(STATUS CMAKE_CURRENT_SOURCE_DIR :${CMAKE_CURRENT_SOURCE_DIR})
MESSAGE(STATUS CMAKE_CURRRENT_BINARY_DIR :${CMAKE_CURRRENT_BINARY_DIR})
MESSAGE(STATUS CMAKE_CURRENT_LIST_FILE :${CMAKE_CURRENT_LIST_FILE})
MESSAGE(STATUS CMAKE_CURRENT_LIST_LINE :${CMAKE_CURRENT_LIST_LINE})
MESSAGE(STATUS CMAKE_MODULE_PATH :${CMAKE_MODULE_PATH})
MESSAGE(STATUS CMAKE_INCLUDE_PATH  :${CMAKE_INCLUDE_PATH})
MESSAGE(STATUS CMAKE_LIBRARY_PATH  :${CMAKE_LIBRARY_PATH})
MESSAGE(STATUS CMAKE_MAJOR_VERSION :${CMAKE_MAJOR_VERSION})
MESSAGE(STATUS CMAKE_MINOR_VERSION :${CMAKE_MINOR_VERSION})
MESSAGE(STATUS CMAKE_PATCH_VERSION :${CMAKE_PATCH_VERSION})
MESSAGE(STATUS CMAKE_SYSTEM :${CMAKE_SYSTEM})
MESSAGE(STATUS CMAKE_SYSTEM_NAME :${CMAKE_SYSTEM_NAME})
MESSAGE(STATUS CMAKE_SYSTEM_VERSION :${CMAKE_SYSTEM_VERSION})
MESSAGE(STATUS CMAKE_SYSTEM_PROCESSOR :${CMAKE_SYSTEM_PROCESSOR})
MESSAGE(STATUS UNIX :${UNIX})
MESSAGE(STATUS WIN32 :${WIN32})
MESSAGE(STATUS CMAKE_SYSTEM :${CMAKE_SYSTEM})
MESSAGE(STATUS PROJECT_NAME :${PROJECT_NAME})

#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  ${PROJECT_SOURCE_DIR}/lib)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY  ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY   ${PROJECT_SOURCE_DIR}/bin)
 
LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})
#windows(工程的名称) 生成执行文件的名称

add_subdirectory(subdir)

add_subdirectory(library)

add_executable(demo main.cpp)

target_link_libraries(demo demo5)

add_executable(demo2 main.cpp)

target_link_libraries(demo2 demo5)

add_subdirectory(win32)



