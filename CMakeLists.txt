cmake_minimum_required(VERSION 4.4 FATAL_ERROR)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "f35a9ac6-8463-4d38-8eec-5d6008153e7d")

project(ModulesWokShop LANGUAGES CXX)

set(CMAKE_CXX_MODULE_STD 1)

set (CMAKE_CXX_STANDARD 23)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set (MY_CXX_FLAGS
    "-Wall \
    -Wextra \
    -Werror \
    -Wnon-virtual-dtor \
    -Wsuggest-override \
    -pedantic \
    -pedantic-errors"
    )

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${MY_CXX_FLAGS}")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(HeaderOnly)
add_subdirectory(HeaderAndImpl)
add_subdirectory(HeaderAndImpl2)

add_subdirectory(HeaderAndImpl2Partition)
add_subdirectory(HeaderAndImpl2PartitionAndPubViaPmi)
add_subdirectory(HeaderAndImpl2PartitionAsHeader)

add_subdirectory(IncludingHeaderInImpl)
add_subdirectory(IncludingHeaderInInterface)
add_subdirectory(IncludingHeaderInInterfaceAndImplementationToUsingStd)

add_subdirectory(NameMangling)
