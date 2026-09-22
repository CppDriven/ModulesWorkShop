cmake_minimum_required(VERSION 4.4 FATAL_ERROR)


add_executable(AppIncludingHeaderInImpl src/main.cpp)

target_link_libraries(AppIncludingHeaderInImpl  PRIVATE LibIncludingHeaderInImpl)
