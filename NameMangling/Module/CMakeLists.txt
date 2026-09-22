cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(NameMangling)

target_sources(NameMangling
    PRIVATE
        src/main.cpp
        src/Helper.cpp   # aka a libray used by the Numbers module, which we just compile and link directly here
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/Numbers.cpp
)
