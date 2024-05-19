cmake_minimum_required(VERSION 3.29)

project(example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(ConceptualExample ${CMAKE_CURRENT_SOURCE_DIR}/ConceptualExample.cpp)

add_executable(example ${CMAKE_CURRENT_SOURCE_DIR}/Program.cpp)

target_link_libraries(example ConceptualExample)

install(TARGETS example
    RUNTIME DESTINATION bin
)

set(CPACK_PACKAGE_VERSION 1.0.0)

include(CPack)
