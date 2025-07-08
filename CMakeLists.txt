cmake_minimum_required(VERSION 3.21)  # CUDA language support is stable from 3.18+
project(TEST LANGUAGES CXX CUDA) # Define the project name and languages

set(CMAKE_CXX_STANDARD 20) # Set C++ standard to C++20
set(CMAKE_CUDA_STANDARD 20) # Set CUDA standard to C++20
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Export compile commands for better IDE support

add_executable(TEST
        GPUKernelManager/kernel.cu
        CPUKernelManager/kernel.cpp
        main.cpp
) # Add the executable target with source files

# Optional: enable separate compilation if you use __device__ functions across files
set_target_properties(TEST PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON
        CXX_STANDARD 20
        CUDA_STANDARD 20
)
