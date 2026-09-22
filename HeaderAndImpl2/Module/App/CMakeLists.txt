cmake_minimum_required(VERSION 4.4 FATAL_ERROR)


add_executable(AppContainingModuleImpl2Module src/main.cpp)

target_link_libraries(AppContainingModuleImpl2Module
    PRIVATE LibraryImpl2Module)
