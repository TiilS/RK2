cmake_minimum_required(VERSION 3.29)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SOURCES
    src/main.cpp
    src/other_source_file.cpp
    )


option(BUILD_TESTS "Build tests" OFF)
option(PACK "pack" OFF)

project(program)
file(GLOB SOURCES "ConceptualExample.cpp" , "Program.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})
add_executable(check ${SOURCES})

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(third-party/gtest)
    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

    add_executable(runUnitTests tests/test_main.cpp)
    target_link_libraries(runUnitTests gtest gtest_main)
    add_test(runUnitTests runUnitTests)
endif()

include(CPack.cmake)
