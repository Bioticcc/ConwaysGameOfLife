# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name
project(MyProject)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Includes
include_directories(include)

# Add all .cpp files in src directory
file(GLOB SOURCES "src/*.cpp")

# Add the executable
add_executable(MyProject ${SOURCES})

# Find and link SFML libraries
find_package(SFML 2.5 REQUIRED COMPONENTS system window graphics)
target_link_libraries(MyProject sfml-system sfml-window sfml-graphics)
