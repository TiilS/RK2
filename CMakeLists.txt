cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
option(BUILD_TESTS "Build tests" OFF)

if(BUILD_TESTS)                   
  add_compile_options(--coverage) 
endif()

project (ConceptualExample)

add_library(ConceptualExample STATIC ${CMAKE_CURRENT_SOURCE_DIR}/ConceptualExample.cpp)
target_include_directories(ConceptualExample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/)

target_link_libraries(ConceptualExample gcov)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB ConceptualExample_TEST_SOURCES test.cpp)
  add_executable(check ${ConceptualExample_TEST_SOURCES})
  target_link_libraries(check ConceptualExample gtest_main)
  add_test(NAME check COMMAND check)
endif()
