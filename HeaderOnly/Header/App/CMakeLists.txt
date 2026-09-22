cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(AppContainingModuleHoHeader ./src/main.cpp)

target_link_libraries(AppContainingModuleHoHeader PRIVATE LibHeaderOnly)

set_target_properties(AppContainingModuleHoHeader PROPERTIES CXX_SCAN_FOR_MODULES OFF)
