cmake_minimum_required(VERSION 3.20)
project(vectorize C)

set(CMAKE_C_STANDARD 99)

add_executable(vectorize main.c vector/vector.c)
