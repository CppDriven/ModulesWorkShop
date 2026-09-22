cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(AppHeaderAndImpl2Helper ./src/main.cpp )

target_link_libraries(AppHeaderAndImpl2Helper PRIVATE LibHeaderAndImpl2Helper)

set_target_properties(AppHeaderAndImpl2Helper PROPERTIES CXX_SCAN_FOR_MODULES OFF)
