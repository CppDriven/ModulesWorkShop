cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibHeaderImpl2 STATIC)

target_sources(LibHeaderImpl2
    PRIVATE
        src/Numbers1.cpp
        src/Numbers2.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            ${CMAKE_CURRENT_LIST_DIR}/include
        FILES
            ${CMAKE_CURRENT_LIST_DIR}/include/Numbers.h
)

set_target_properties(LibHeaderImpl2 PROPERTIES CXX_SCAN_FOR_MODULES OFF)
