# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/58/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/58/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mateusz/CLionProjects/HomeBudget

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mateusz/CLionProjects/HomeBudget/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HomeBudget.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HomeBudget.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HomeBudget.dir/flags.make

CMakeFiles/HomeBudget.dir/main.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HomeBudget.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/main.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/main.cpp

CMakeFiles/HomeBudget.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/main.cpp > CMakeFiles/HomeBudget.dir/main.cpp.i

CMakeFiles/HomeBudget.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/main.cpp -o CMakeFiles/HomeBudget.dir/main.cpp.s

CMakeFiles/HomeBudget.dir/Login.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/Login.cpp.o: ../Login.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HomeBudget.dir/Login.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/Login.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/Login.cpp

CMakeFiles/HomeBudget.dir/Login.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/Login.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/Login.cpp > CMakeFiles/HomeBudget.dir/Login.cpp.i

CMakeFiles/HomeBudget.dir/Login.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/Login.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/Login.cpp -o CMakeFiles/HomeBudget.dir/Login.cpp.s

# Object files for target HomeBudget
HomeBudget_OBJECTS = \
"CMakeFiles/HomeBudget.dir/main.cpp.o" \
"CMakeFiles/HomeBudget.dir/Login.cpp.o"

# External object files for target HomeBudget
HomeBudget_EXTERNAL_OBJECTS =

HomeBudget: CMakeFiles/HomeBudget.dir/main.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/Login.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/build.make
HomeBudget: CMakeFiles/HomeBudget.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable HomeBudget"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HomeBudget.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HomeBudget.dir/build: HomeBudget

.PHONY : CMakeFiles/HomeBudget.dir/build

CMakeFiles/HomeBudget.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HomeBudget.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HomeBudget.dir/clean

CMakeFiles/HomeBudget.dir/depend:
	cd /home/mateusz/CLionProjects/HomeBudget/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mateusz/CLionProjects/HomeBudget /home/mateusz/CLionProjects/HomeBudget /home/mateusz/CLionProjects/HomeBudget/cmake-build-debug /home/mateusz/CLionProjects/HomeBudget/cmake-build-debug /home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles/HomeBudget.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HomeBudget.dir/depend

