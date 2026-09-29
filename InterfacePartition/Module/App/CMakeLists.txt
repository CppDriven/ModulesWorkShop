cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(AppInterfacePartition src/main.cpp)

target_link_libraries(AppInterfacePartition
    PRIVATE LibraryInterfacePartition)
