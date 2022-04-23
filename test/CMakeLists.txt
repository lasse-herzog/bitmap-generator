project(test)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(run_tests DrawingUtilsTest.cpp)

target_link_libraries(run_tests bitmap_generator_lib)
target_link_libraries(run_tests gtest gtest_main)