cmake_minimum_required(VERSION 3.20)
project(Math LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(Math
    src/main.cpp
    src/base_converter.cpp
)
