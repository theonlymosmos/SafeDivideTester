# Set the compiler paths
set(CC "D:/Downloads/mingw64/bin/gcc.exe")
set(CXX "D:/Downloads/mingw64/bin/g++.exe")
set(CMAKE_C_COMPILER "D:/Downloads/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "D:/Downloads/mingw64/bin/g++.exe")

# Minimum CMake version and project name
cmake_minimum_required(VERSION 3.14)
project(testLab)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include GoogleTest using FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Define the executable target and its source file
add_executable(
    test_case
    test_case.cc
)

# Link the executable with GoogleTest main library
target_link_libraries(
    test_case
    GTest::gtest_main
)

# Include GoogleTest module
include(GoogleTest)

# Discover and register all tests in the executable
gtest_discover_tests(test_case)
