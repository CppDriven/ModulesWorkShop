cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibraryInterfacePartition STATIC)

target_sources(LibraryInterfacePartition
    PRIVATE
        src/Numbers1.cpp
        src/Numbers2.cpp
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/Numbers.cpp
            src/NumbersIfPar1.cpp
            src/NumbersIfPar2.cpp
)
