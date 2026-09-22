cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(AppContainingModuleImpl2PartitionModule src/main.cpp)

target_link_libraries(AppContainingModuleImpl2PartitionModule
    PRIVATE LibraryImpl2PartitionModule)
