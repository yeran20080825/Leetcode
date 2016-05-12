cmake_minimum_required(VERSION 3.5)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES removeDuplicates.cpp "Plus One.cpp")
add_executable(leetcode ${SOURCE_FILES} removeDuplicates.cpp "Plus One.cpp")