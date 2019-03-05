cmake_minimum_required(VERSION 3.10)
project(dummy-test)

add_executable(${PROJECT_NAME} 
    gtest_main.cc
    sample1.cc
    sample1_unittest.cc
  )

target_link_libraries(${PROJECT_NAME} gtest)

add_test (NAME FactorialTest COMMAND ${PROJECT_NAME} --gtest_filter=FactorialTest*)
add_test (NAME IsPrimeTest COMMAND ${PROJECT_NAME}  --gtest_filter=IsPrimeTest*)