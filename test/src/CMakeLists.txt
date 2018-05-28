include_directories(${gtest_SOURCE_DIR} ${gtest_SOURCE_DIR}/include)

add_executable(runBasicAdderTests adder_test.cpp gtest_test.cpp)

target_link_libraries(runBasicAdderTests gtest gtest_main)