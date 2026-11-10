cmake_minimum_required(VERSION 3.20)
project(FusionSDK VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(fusion_sdk INTERFACE)
target_include_directories(fusion_sdk INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

option(FUSION_BUILD_EXAMPLE "Build the example mod" ON)
if(FUSION_BUILD_EXAMPLE)
    add_subdirectory(examples/hello-mod)
endif()
