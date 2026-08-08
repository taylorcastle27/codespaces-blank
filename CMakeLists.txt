cmake_minimum_required(VERSION 3.16)

project(cpp_learning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lesson_01_hello src/lesson_01_hello.cpp)
add_executable(lesson_02_types src/lesson_02_types.cpp)
add_executable(exercise_01_fizzbuzz exercises/exercise_01_fizzbuzz.cpp)
add_executable(exercise_02_vector_stats exercises/exercise_02_vector_stats.cpp)
add_executable(mad_libs src/mad_libs.cpp)