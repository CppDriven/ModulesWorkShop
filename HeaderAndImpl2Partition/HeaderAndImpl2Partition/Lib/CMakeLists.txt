cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibHeaderAndImpl2Helper STATIC)

target_sources(LibHeaderAndImpl2Helper
    PRIVATE
        src/Numbers1.cpp
        src/Numbers2.cpp
        src/Helper.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            ${CMAKE_CURRENT_LIST_DIR}/include
        FILES
            ${CMAKE_CURRENT_LIST_DIR}/include/Numbers.h
)

set_target_properties(LibHeaderAndImpl2Helper PROPERTIES CXX_SCAN_FOR_MODULES OFF)
