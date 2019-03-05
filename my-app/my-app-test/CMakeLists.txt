cmake_minimum_required(VERSION 3.10)
project(myAppTest)

add_executable(${PROJECT_NAME} 
  myAppTest.cc
  sample1_unittest.cc
  ../sample1.cc
)

target_include_directories(${PROJECT_NAME} 
  PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)
  
target_link_libraries(${PROJECT_NAME} gtest)

add_test (NAME FactorialTest COMMAND ${PROJECT_NAME} --gtest_filter=FactorialTest*)
add_test (NAME IsPrimeTest COMMAND ${PROJECT_NAME}  --gtest_filter=IsPrimeTest*)