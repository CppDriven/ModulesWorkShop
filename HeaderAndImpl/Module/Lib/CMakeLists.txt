cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_library(LibraryImplModule)

target_sources(LibraryImplModule
    PRIVATE
        src/NumbersImpl.cpp
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/Numbers.cpp
)
