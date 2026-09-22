cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibraryImpl2PartitionModuleAsHeader STATIC)

target_sources(LibraryImpl2PartitionModuleAsHeader
    PRIVATE
        src/Numbers1.cpp
        src/Numbers2.cpp
        src/Helper.cpp
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/Numbers.cpp
            src/Helperh.cpp
)
