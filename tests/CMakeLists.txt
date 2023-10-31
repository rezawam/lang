message(STATUS "Generating tests")

find_package(Catch2 REQUIRED)

add_executable(tests lexer_cases.cpp)

# Link Catch2 to your test executable
target_link_libraries(tests Catch2::Catch2)

# Register your tests with CTest (optional but recommended)
include(CTest)
include(Catch)
catch_discover_tests(tests)
