# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build

# Include any dependencies generated for this target.
include CMakeFiles/csv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/csv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/csv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/csv.dir/flags.make

CMakeFiles/csv.dir/csv.cpp.o: CMakeFiles/csv.dir/flags.make
CMakeFiles/csv.dir/csv.cpp.o: /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source/csv.cpp
CMakeFiles/csv.dir/csv.cpp.o: CMakeFiles/csv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/csv.dir/csv.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/csv.dir/csv.cpp.o -MF CMakeFiles/csv.dir/csv.cpp.o.d -o CMakeFiles/csv.dir/csv.cpp.o -c /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source/csv.cpp

CMakeFiles/csv.dir/csv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/csv.dir/csv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source/csv.cpp > CMakeFiles/csv.dir/csv.cpp.i

CMakeFiles/csv.dir/csv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/csv.dir/csv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source/csv.cpp -o CMakeFiles/csv.dir/csv.cpp.s

# Object files for target csv
csv_OBJECTS = \
"CMakeFiles/csv.dir/csv.cpp.o"

# External object files for target csv
csv_EXTERNAL_OBJECTS =

csv: CMakeFiles/csv.dir/csv.cpp.o
csv: CMakeFiles/csv.dir/build.make
csv: CMakeFiles/csv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable csv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/csv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/csv.dir/build: csv
.PHONY : CMakeFiles/csv.dir/build

CMakeFiles/csv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/csv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/csv.dir/clean

CMakeFiles/csv.dir/depend:
	cd /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/source /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build /home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/build/CMakeFiles/csv.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/csv.dir/depend

