cmake_minimum_required(VERSION 3.15)
project(coding)

set(CMAKE_CXX_STANDARD 17)

#add_executable(coding main.cpp)
add_executable(pointer src/basics/pointers.cpp )
add_executable(refs src/basics/references.cpp)
add_executable(cons src/basics/consts.cpp)
add_executable(autos src/basics/autos.cpp)