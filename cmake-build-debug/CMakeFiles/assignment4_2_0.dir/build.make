# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = "/Users/cian/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7319.72/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/cian/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7319.72/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/cian/Google Drive/cpp_projects/assignment4.2.0"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/assignment4_2_0.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment4_2_0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment4_2_0.dir/flags.make

CMakeFiles/assignment4_2_0.dir/main.cpp.o: CMakeFiles/assignment4_2_0.dir/flags.make
CMakeFiles/assignment4_2_0.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignment4_2_0.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment4_2_0.dir/main.cpp.o -c "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/main.cpp"

CMakeFiles/assignment4_2_0.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment4_2_0.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/main.cpp" > CMakeFiles/assignment4_2_0.dir/main.cpp.i

CMakeFiles/assignment4_2_0.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment4_2_0.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/main.cpp" -o CMakeFiles/assignment4_2_0.dir/main.cpp.s

CMakeFiles/assignment4_2_0.dir/Piece.cpp.o: CMakeFiles/assignment4_2_0.dir/flags.make
CMakeFiles/assignment4_2_0.dir/Piece.cpp.o: ../Piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/assignment4_2_0.dir/Piece.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment4_2_0.dir/Piece.cpp.o -c "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Piece.cpp"

CMakeFiles/assignment4_2_0.dir/Piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment4_2_0.dir/Piece.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Piece.cpp" > CMakeFiles/assignment4_2_0.dir/Piece.cpp.i

CMakeFiles/assignment4_2_0.dir/Piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment4_2_0.dir/Piece.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Piece.cpp" -o CMakeFiles/assignment4_2_0.dir/Piece.cpp.s

CMakeFiles/assignment4_2_0.dir/Square.cpp.o: CMakeFiles/assignment4_2_0.dir/flags.make
CMakeFiles/assignment4_2_0.dir/Square.cpp.o: ../Square.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/assignment4_2_0.dir/Square.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment4_2_0.dir/Square.cpp.o -c "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Square.cpp"

CMakeFiles/assignment4_2_0.dir/Square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment4_2_0.dir/Square.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Square.cpp" > CMakeFiles/assignment4_2_0.dir/Square.cpp.i

CMakeFiles/assignment4_2_0.dir/Square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment4_2_0.dir/Square.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Square.cpp" -o CMakeFiles/assignment4_2_0.dir/Square.cpp.s

CMakeFiles/assignment4_2_0.dir/Board.cpp.o: CMakeFiles/assignment4_2_0.dir/flags.make
CMakeFiles/assignment4_2_0.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/assignment4_2_0.dir/Board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment4_2_0.dir/Board.cpp.o -c "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Board.cpp"

CMakeFiles/assignment4_2_0.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment4_2_0.dir/Board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Board.cpp" > CMakeFiles/assignment4_2_0.dir/Board.cpp.i

CMakeFiles/assignment4_2_0.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment4_2_0.dir/Board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/Board.cpp" -o CMakeFiles/assignment4_2_0.dir/Board.cpp.s

CMakeFiles/assignment4_2_0.dir/application.cpp.o: CMakeFiles/assignment4_2_0.dir/flags.make
CMakeFiles/assignment4_2_0.dir/application.cpp.o: ../application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/assignment4_2_0.dir/application.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment4_2_0.dir/application.cpp.o -c "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/application.cpp"

CMakeFiles/assignment4_2_0.dir/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment4_2_0.dir/application.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/application.cpp" > CMakeFiles/assignment4_2_0.dir/application.cpp.i

CMakeFiles/assignment4_2_0.dir/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment4_2_0.dir/application.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/application.cpp" -o CMakeFiles/assignment4_2_0.dir/application.cpp.s

# Object files for target assignment4_2_0
assignment4_2_0_OBJECTS = \
"CMakeFiles/assignment4_2_0.dir/main.cpp.o" \
"CMakeFiles/assignment4_2_0.dir/Piece.cpp.o" \
"CMakeFiles/assignment4_2_0.dir/Square.cpp.o" \
"CMakeFiles/assignment4_2_0.dir/Board.cpp.o" \
"CMakeFiles/assignment4_2_0.dir/application.cpp.o"

# External object files for target assignment4_2_0
assignment4_2_0_EXTERNAL_OBJECTS =

assignment4_2_0: CMakeFiles/assignment4_2_0.dir/main.cpp.o
assignment4_2_0: CMakeFiles/assignment4_2_0.dir/Piece.cpp.o
assignment4_2_0: CMakeFiles/assignment4_2_0.dir/Square.cpp.o
assignment4_2_0: CMakeFiles/assignment4_2_0.dir/Board.cpp.o
assignment4_2_0: CMakeFiles/assignment4_2_0.dir/application.cpp.o
assignment4_2_0: CMakeFiles/assignment4_2_0.dir/build.make
assignment4_2_0: CMakeFiles/assignment4_2_0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable assignment4_2_0"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment4_2_0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment4_2_0.dir/build: assignment4_2_0

.PHONY : CMakeFiles/assignment4_2_0.dir/build

CMakeFiles/assignment4_2_0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignment4_2_0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignment4_2_0.dir/clean

CMakeFiles/assignment4_2_0.dir/depend:
	cd "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/cian/Google Drive/cpp_projects/assignment4.2.0" "/Users/cian/Google Drive/cpp_projects/assignment4.2.0" "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug" "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug" "/Users/cian/Google Drive/cpp_projects/assignment4.2.0/cmake-build-debug/CMakeFiles/assignment4_2_0.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/assignment4_2_0.dir/depend

