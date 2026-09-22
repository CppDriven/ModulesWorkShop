cmake_minimum_required(VERSION 4.4 FATAL_ERROR)


add_executable(AppContainingModuleImplModule src/main.cpp)

target_link_libraries(AppContainingModuleImplModule PRIVATE LibraryImplModule)
