# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\vectorize

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\vectorize\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vectorize.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/vectorize.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vectorize.dir/flags.make

CMakeFiles/vectorize.dir/main.c.obj: CMakeFiles/vectorize.dir/flags.make
CMakeFiles/vectorize.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\vectorize\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/vectorize.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\vectorize.dir\main.c.obj -c C:\vectorize\main.c

CMakeFiles/vectorize.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vectorize.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\vectorize\main.c > CMakeFiles\vectorize.dir\main.c.i

CMakeFiles/vectorize.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vectorize.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\vectorize\main.c -o CMakeFiles\vectorize.dir\main.c.s

CMakeFiles/vectorize.dir/vector/vector.c.obj: CMakeFiles/vectorize.dir/flags.make
CMakeFiles/vectorize.dir/vector/vector.c.obj: ../vector/vector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\vectorize\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/vectorize.dir/vector/vector.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\vectorize.dir\vector\vector.c.obj -c C:\vectorize\vector\vector.c

CMakeFiles/vectorize.dir/vector/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vectorize.dir/vector/vector.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\vectorize\vector\vector.c > CMakeFiles\vectorize.dir\vector\vector.c.i

CMakeFiles/vectorize.dir/vector/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vectorize.dir/vector/vector.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\vectorize\vector\vector.c -o CMakeFiles\vectorize.dir\vector\vector.c.s

# Object files for target vectorize
vectorize_OBJECTS = \
"CMakeFiles/vectorize.dir/main.c.obj" \
"CMakeFiles/vectorize.dir/vector/vector.c.obj"

# External object files for target vectorize
vectorize_EXTERNAL_OBJECTS =

vectorize.exe: CMakeFiles/vectorize.dir/main.c.obj
vectorize.exe: CMakeFiles/vectorize.dir/vector/vector.c.obj
vectorize.exe: CMakeFiles/vectorize.dir/build.make
vectorize.exe: CMakeFiles/vectorize.dir/linklibs.rsp
vectorize.exe: CMakeFiles/vectorize.dir/objects1.rsp
vectorize.exe: CMakeFiles/vectorize.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\vectorize\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable vectorize.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\vectorize.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vectorize.dir/build: vectorize.exe
.PHONY : CMakeFiles/vectorize.dir/build

CMakeFiles/vectorize.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\vectorize.dir\cmake_clean.cmake
.PHONY : CMakeFiles/vectorize.dir/clean

CMakeFiles/vectorize.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\vectorize C:\vectorize C:\vectorize\cmake-build-debug C:\vectorize\cmake-build-debug C:\vectorize\cmake-build-debug\CMakeFiles\vectorize.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vectorize.dir/depend
