# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/2004np/Programming/lang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/2004np/Programming/lang/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/tests.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/tests.dir/flags.make

tests/CMakeFiles/tests.dir/lexer_cases.cpp.o: tests/CMakeFiles/tests.dir/flags.make
tests/CMakeFiles/tests.dir/lexer_cases.cpp.o: ../tests/lexer_cases.cpp
tests/CMakeFiles/tests.dir/lexer_cases.cpp.o: tests/CMakeFiles/tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/2004np/Programming/lang/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/tests.dir/lexer_cases.cpp.o"
	cd /Users/2004np/Programming/lang/build/tests && /usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/tests.dir/lexer_cases.cpp.o -MF CMakeFiles/tests.dir/lexer_cases.cpp.o.d -o CMakeFiles/tests.dir/lexer_cases.cpp.o -c /Users/2004np/Programming/lang/tests/lexer_cases.cpp

tests/CMakeFiles/tests.dir/lexer_cases.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/lexer_cases.cpp.i"
	cd /Users/2004np/Programming/lang/build/tests && /usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/2004np/Programming/lang/tests/lexer_cases.cpp > CMakeFiles/tests.dir/lexer_cases.cpp.i

tests/CMakeFiles/tests.dir/lexer_cases.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/lexer_cases.cpp.s"
	cd /Users/2004np/Programming/lang/build/tests && /usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/2004np/Programming/lang/tests/lexer_cases.cpp -o CMakeFiles/tests.dir/lexer_cases.cpp.s

# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/lexer_cases.cpp.o"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

tests/tests: tests/CMakeFiles/tests.dir/lexer_cases.cpp.o
tests/tests: tests/CMakeFiles/tests.dir/build.make
tests/tests: tests/CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/2004np/Programming/lang/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests"
	cd /Users/2004np/Programming/lang/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/2004np/Programming/lang/build/tests && /opt/local/bin/cmake -D TEST_TARGET=tests -D TEST_EXECUTABLE=/Users/2004np/Programming/lang/build/tests/tests -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/2004np/Programming/lang/build/tests -D TEST_SPEC= -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_LIST=tests_TESTS -D TEST_REPORTER= -D TEST_OUTPUT_DIR= -D TEST_OUTPUT_PREFIX= -D TEST_OUTPUT_SUFFIX= -D CTEST_FILE=/Users/2004np/Programming/lang/build/tests/tests_tests-b12d07c.cmake -P /opt/local/lib/cmake/Catch2/CatchAddTests.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/tests.dir/build: tests/tests
.PHONY : tests/CMakeFiles/tests.dir/build

tests/CMakeFiles/tests.dir/clean:
	cd /Users/2004np/Programming/lang/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/tests.dir/clean

tests/CMakeFiles/tests.dir/depend:
	cd /Users/2004np/Programming/lang/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/2004np/Programming/lang /Users/2004np/Programming/lang/tests /Users/2004np/Programming/lang/build /Users/2004np/Programming/lang/build/tests /Users/2004np/Programming/lang/build/tests/CMakeFiles/tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/tests.dir/depend
