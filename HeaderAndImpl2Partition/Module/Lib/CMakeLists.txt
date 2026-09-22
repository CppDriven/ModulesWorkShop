cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibraryImpl2PartitionModule STATIC)

target_sources(LibraryImpl2PartitionModule
    PRIVATE
        src/Numbers1.cpp
        src/Numbers2.cpp
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/Numbers.cpp
            src/Helper.cpp
)
