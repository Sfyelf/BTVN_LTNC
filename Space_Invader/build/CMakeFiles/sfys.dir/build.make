# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C++\Test\SDL2-Setup

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++\Test\SDL2-Setup\build

# Include any dependencies generated for this target.
include CMakeFiles/sfys.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sfys.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sfys.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sfys.dir/flags.make

CMakeFiles/sfys.dir/src/Game.cpp.obj: CMakeFiles/sfys.dir/flags.make
CMakeFiles/sfys.dir/src/Game.cpp.obj: CMakeFiles/sfys.dir/includes_CXX.rsp
CMakeFiles/sfys.dir/src/Game.cpp.obj: D:/C++/Test/SDL2-Setup/src/Game.cpp
CMakeFiles/sfys.dir/src/Game.cpp.obj: CMakeFiles/sfys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\C++\Test\SDL2-Setup\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sfys.dir/src/Game.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sfys.dir/src/Game.cpp.obj -MF CMakeFiles\sfys.dir\src\Game.cpp.obj.d -o CMakeFiles\sfys.dir\src\Game.cpp.obj -c D:\C++\Test\SDL2-Setup\src\Game.cpp

CMakeFiles/sfys.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sfys.dir/src/Game.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++\Test\SDL2-Setup\src\Game.cpp > CMakeFiles\sfys.dir\src\Game.cpp.i

CMakeFiles/sfys.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sfys.dir/src/Game.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++\Test\SDL2-Setup\src\Game.cpp -o CMakeFiles\sfys.dir\src\Game.cpp.s

CMakeFiles/sfys.dir/src/main.cpp.obj: CMakeFiles/sfys.dir/flags.make
CMakeFiles/sfys.dir/src/main.cpp.obj: CMakeFiles/sfys.dir/includes_CXX.rsp
CMakeFiles/sfys.dir/src/main.cpp.obj: D:/C++/Test/SDL2-Setup/src/main.cpp
CMakeFiles/sfys.dir/src/main.cpp.obj: CMakeFiles/sfys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\C++\Test\SDL2-Setup\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sfys.dir/src/main.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sfys.dir/src/main.cpp.obj -MF CMakeFiles\sfys.dir\src\main.cpp.obj.d -o CMakeFiles\sfys.dir\src\main.cpp.obj -c D:\C++\Test\SDL2-Setup\src\main.cpp

CMakeFiles/sfys.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sfys.dir/src/main.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++\Test\SDL2-Setup\src\main.cpp > CMakeFiles\sfys.dir\src\main.cpp.i

CMakeFiles/sfys.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sfys.dir/src/main.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++\Test\SDL2-Setup\src\main.cpp -o CMakeFiles\sfys.dir\src\main.cpp.s

# Object files for target sfys
sfys_OBJECTS = \
"CMakeFiles/sfys.dir/src/Game.cpp.obj" \
"CMakeFiles/sfys.dir/src/main.cpp.obj"

# External object files for target sfys
sfys_EXTERNAL_OBJECTS =

sfys.exe: CMakeFiles/sfys.dir/src/Game.cpp.obj
sfys.exe: CMakeFiles/sfys.dir/src/main.cpp.obj
sfys.exe: CMakeFiles/sfys.dir/build.make
sfys.exe: CMakeFiles/sfys.dir/linkLibs.rsp
sfys.exe: CMakeFiles/sfys.dir/objects1.rsp
sfys.exe: CMakeFiles/sfys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\C++\Test\SDL2-Setup\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sfys.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sfys.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sfys.dir/build: sfys.exe
.PHONY : CMakeFiles/sfys.dir/build

CMakeFiles/sfys.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sfys.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sfys.dir/clean

CMakeFiles/sfys.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++\Test\SDL2-Setup D:\C++\Test\SDL2-Setup D:\C++\Test\SDL2-Setup\build D:\C++\Test\SDL2-Setup\build D:\C++\Test\SDL2-Setup\build\CMakeFiles\sfys.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/sfys.dir/depend

