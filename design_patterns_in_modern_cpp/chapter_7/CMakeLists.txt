# Minimum cmake required for this project
cmake_minimum_required(VERSION 2.8)

# Create project and set cmake standard
project(chapter_7)
set(CMAKE_CXX_STANDARD 20)

# Executable for this project
add_executable(bridge
    src/bridge.cpp
    src/main.cpp
    )

# Target include directories
target_include_directories(bridge
    PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    )
