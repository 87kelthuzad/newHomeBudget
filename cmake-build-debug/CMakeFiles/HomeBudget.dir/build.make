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

CMakeFiles/HomeBudget.dir/Controller.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/Controller.cpp.o: ../Controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HomeBudget.dir/Controller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/Controller.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/Controller.cpp

CMakeFiles/HomeBudget.dir/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/Controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/Controller.cpp > CMakeFiles/HomeBudget.dir/Controller.cpp.i

CMakeFiles/HomeBudget.dir/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/Controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/Controller.cpp -o CMakeFiles/HomeBudget.dir/Controller.cpp.s

CMakeFiles/HomeBudget.dir/Ui.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/Ui.cpp.o: ../Ui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HomeBudget.dir/Ui.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/Ui.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/Ui.cpp

CMakeFiles/HomeBudget.dir/Ui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/Ui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/Ui.cpp > CMakeFiles/HomeBudget.dir/Ui.cpp.i

CMakeFiles/HomeBudget.dir/Ui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/Ui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/Ui.cpp -o CMakeFiles/HomeBudget.dir/Ui.cpp.s

CMakeFiles/HomeBudget.dir/FileCSV.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/FileCSV.cpp.o: ../FileCSV.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HomeBudget.dir/FileCSV.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/FileCSV.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/FileCSV.cpp

CMakeFiles/HomeBudget.dir/FileCSV.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/FileCSV.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/FileCSV.cpp > CMakeFiles/HomeBudget.dir/FileCSV.cpp.i

CMakeFiles/HomeBudget.dir/FileCSV.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/FileCSV.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/FileCSV.cpp -o CMakeFiles/HomeBudget.dir/FileCSV.cpp.s

CMakeFiles/HomeBudget.dir/Readable.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/Readable.cpp.o: ../Readable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/HomeBudget.dir/Readable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/Readable.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/Readable.cpp

CMakeFiles/HomeBudget.dir/Readable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/Readable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/Readable.cpp > CMakeFiles/HomeBudget.dir/Readable.cpp.i

CMakeFiles/HomeBudget.dir/Readable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/Readable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/Readable.cpp -o CMakeFiles/HomeBudget.dir/Readable.cpp.s

CMakeFiles/HomeBudget.dir/Transaction.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/Transaction.cpp.o: ../Transaction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/HomeBudget.dir/Transaction.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/Transaction.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/Transaction.cpp

CMakeFiles/HomeBudget.dir/Transaction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/Transaction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/Transaction.cpp > CMakeFiles/HomeBudget.dir/Transaction.cpp.i

CMakeFiles/HomeBudget.dir/Transaction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/Transaction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/Transaction.cpp -o CMakeFiles/HomeBudget.dir/Transaction.cpp.s

CMakeFiles/HomeBudget.dir/User.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/User.cpp.o: ../User.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/HomeBudget.dir/User.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/User.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/User.cpp

CMakeFiles/HomeBudget.dir/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/User.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/User.cpp > CMakeFiles/HomeBudget.dir/User.cpp.i

CMakeFiles/HomeBudget.dir/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/User.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/User.cpp -o CMakeFiles/HomeBudget.dir/User.cpp.s

CMakeFiles/HomeBudget.dir/LocalTime.cpp.o: CMakeFiles/HomeBudget.dir/flags.make
CMakeFiles/HomeBudget.dir/LocalTime.cpp.o: ../LocalTime.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/HomeBudget.dir/LocalTime.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HomeBudget.dir/LocalTime.cpp.o -c /home/mateusz/CLionProjects/HomeBudget/LocalTime.cpp

CMakeFiles/HomeBudget.dir/LocalTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeBudget.dir/LocalTime.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/CLionProjects/HomeBudget/LocalTime.cpp > CMakeFiles/HomeBudget.dir/LocalTime.cpp.i

CMakeFiles/HomeBudget.dir/LocalTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeBudget.dir/LocalTime.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/CLionProjects/HomeBudget/LocalTime.cpp -o CMakeFiles/HomeBudget.dir/LocalTime.cpp.s

# Object files for target HomeBudget
HomeBudget_OBJECTS = \
"CMakeFiles/HomeBudget.dir/main.cpp.o" \
"CMakeFiles/HomeBudget.dir/Login.cpp.o" \
"CMakeFiles/HomeBudget.dir/Controller.cpp.o" \
"CMakeFiles/HomeBudget.dir/Ui.cpp.o" \
"CMakeFiles/HomeBudget.dir/FileCSV.cpp.o" \
"CMakeFiles/HomeBudget.dir/Readable.cpp.o" \
"CMakeFiles/HomeBudget.dir/Transaction.cpp.o" \
"CMakeFiles/HomeBudget.dir/User.cpp.o" \
"CMakeFiles/HomeBudget.dir/LocalTime.cpp.o"

# External object files for target HomeBudget
HomeBudget_EXTERNAL_OBJECTS =

HomeBudget: CMakeFiles/HomeBudget.dir/main.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/Login.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/Controller.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/Ui.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/FileCSV.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/Readable.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/Transaction.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/User.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/LocalTime.cpp.o
HomeBudget: CMakeFiles/HomeBudget.dir/build.make
HomeBudget: CMakeFiles/HomeBudget.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mateusz/CLionProjects/HomeBudget/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable HomeBudget"
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

