cmake_minimum_required(VERSION 3.0)
project(Lab3)

file(GLOB src ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB main ${PROJECT_SOURCE_DIR}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(Lab3 ${main} ${headers} ${src})
add_compile_options(-g -Wall -pedantic -std=c++14)
set_property(TARGET Lab3 PROPERTY CXX_STANDARD 14)

set(CMAKE_PROJECT_NAME ${PROJECT_NAME})

