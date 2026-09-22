cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(HeaderAndImpl2PartitionAsHeader src/main.cpp)

target_link_libraries(HeaderAndImpl2PartitionAsHeader
    PRIVATE LibraryImpl2PartitionModuleAsHeader)
