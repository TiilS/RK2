cmake_minimum_required(VERSION 3.29)

project(AbstractClassVsInterface)

add_executable(AbstractClassVsInterface 
    Program.cpp 
    ConceptualExample.cpp
)

set_target_properties(AbstractClassVsInterface PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

