cmake_minimum_required(VERSION 3.10)

project(Biblioteca)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCE_FILES
    src/Biblioteca.cpp
    src/Libro.cpp
    src/main.cpp
)

add_executable(Biblioteca ${SOURCE_FILES})
