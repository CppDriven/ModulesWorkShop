
add_library(LibHeaderOnlyModule STATIC)

target_sources(LibHeaderOnlyModule
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/Numbers.cpp
)
