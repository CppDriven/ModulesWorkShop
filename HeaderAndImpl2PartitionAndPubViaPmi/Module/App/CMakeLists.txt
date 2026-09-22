cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(HeaderAndImpl2PartitionAndPubViaPmi src/main.cpp)

target_link_libraries(HeaderAndImpl2PartitionAndPubViaPmi
    PRIVATE LibraryImpl2PartitionModuleAndPubViaPmi)
