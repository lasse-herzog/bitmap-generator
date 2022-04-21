cmake_minimum_required(VERSION 3.22)
project(bitmap_generator C)

set(CMAKE_C_STANDARD 23)

add_subdirectory(test)

add_executable(bitmap_generator src/main.c)
