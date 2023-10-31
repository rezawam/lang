cmake_minimum_required(VERSION 3.14)
project(lang VERSION 1.0)

set(CMAKE_CXX_STANDARD 17) 
find_package(Catch2 REQUIRED)
target_link_libraries(${LANG} Catch2::Catch2)

add_executable(lang main.cpp src/lexer/scanner.cpp)

include_directories(include/lexer)

add_subdirectory(tests)

