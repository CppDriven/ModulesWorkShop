cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

add_executable(AppContainingModuleImplHeader ./src/main.cpp)

target_link_libraries(AppContainingModuleImplHeader PRIVATE LibHeaderImpl)

set_target_properties(AppContainingModuleImplHeader PROPERTIES CXX_SCAN_FOR_MODULES OFF)
