cmake_minimum_required(VERSION 3.22)
project(bitmap_generator C)

set(CMAKE_C_STANDARD 23)

set(SOURCE_FILES src/main.c)

include_directories(src/bitmap_generator_lib)

add_subdirectory(test)
add_subdirectory(src/bitmap_generator_lib)

add_executable(bitmap_generator ${SOURCE_FILES})

target_link_libraries(bitmap_generator bitmap_generator_lib)
target_link_libraries(bitmap_generator m)