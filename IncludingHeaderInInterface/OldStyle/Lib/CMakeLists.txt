cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibHeaderIncludeInInterface STATIC)

target_sources(LibHeaderIncludeInInterface
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

set_target_properties(LibHeaderIncludeInInterface PROPERTIES CXX_SCAN_FOR_MODULES OFF)
