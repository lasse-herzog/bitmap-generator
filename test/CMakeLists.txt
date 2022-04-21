project(test)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(run_tests dummy_test.cpp)
target_link_libraries(run_tests gtest gtest_main)