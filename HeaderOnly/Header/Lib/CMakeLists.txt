cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibHeaderOnly INTERFACE)

target_sources(
    LibHeaderOnly
    INTERFACE
        FILE_SET HEADERS
        BASE_DIRS
            ${CMAKE_CURRENT_LIST_DIR}/include
        FILES
            ${CMAKE_CURRENT_LIST_DIR}/include/Numbers.h
)
