
add_executable(AppContainingModuleHoModule ./src/main.cpp)

target_link_libraries(AppContainingModuleHoModule PRIVATE LibHeaderOnlyModule)
