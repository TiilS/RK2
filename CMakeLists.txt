cmake_minimum_required(VERSION 3.29)

project(ConceptualExample)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ConceptualExample.cpp ConceptualExample)

add_executable(example ${CMAKE_CURRENT_SOURCE_DIR}/Program.cpp)

target_link_libraries(example ConceptualExample)

install(TARGETS example
    RUNTIME DESTINATION bin
)
include(CPack.cmake)
