cmake_minimum_required(VERSION 4.4 FATAL_ERROR)


add_executable(AppImportStd src/main.cpp)

target_link_libraries(AppImportStd  PRIVATE LibImportStd)
