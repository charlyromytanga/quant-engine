cmake_minimum_required(VERSION 3.16)

project(quant_engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(benchmarks)