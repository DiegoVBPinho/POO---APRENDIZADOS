# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.20)

# Define the project name and language
project(POO
LANGUAGES CXX 
VERSION 1.0)

# Specify the C++ standard to use (optional, but recommended for modern C++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS Trues)

# Add an executable target from the source file
add_executable(poo
    Pokemon.cpp    
    02_main.cpp
    Pokemon_Fogo.cpp
)
target_include_directories(poo PUBLIC ${CMAKE_SOURCE_DIR})

