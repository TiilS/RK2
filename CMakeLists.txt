cmake_minimum_required(VERSION 3.10)

# Set the project name
project(AbstractClassVsInterface)

# Add executable
add_executable(AbstractClassVsInterface 
    Program.cpp 
    ConceptualExample.cpp
)

# Set C++ standard
set_target_properties(AbstractClassVsInterface PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

enable_testing()

add_subdirectory(third-party/gtest)

add_executable(tests test.cpp)
target_link_libraries(tests gtest gtest_main)
add_test(NAME MyTest COMMAND tests)

