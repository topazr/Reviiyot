# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/topaz/Downloads/clion-2016.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/topaz/Downloads/clion-2016.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/topaz/ClionProjects/Reviiyot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/topaz/ClionProjects/Reviiyot/cmake-build-default

# Include any dependencies generated for this target.
include CMakeFiles/Reviiyot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Reviiyot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Reviiyot.dir/flags.make

CMakeFiles/Reviiyot.dir/src/Card.cpp.o: CMakeFiles/Reviiyot.dir/flags.make
CMakeFiles/Reviiyot.dir/src/Card.cpp.o: ../src/Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Reviiyot.dir/src/Card.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reviiyot.dir/src/Card.cpp.o -c /home/topaz/ClionProjects/Reviiyot/src/Card.cpp

CMakeFiles/Reviiyot.dir/src/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reviiyot.dir/src/Card.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/topaz/ClionProjects/Reviiyot/src/Card.cpp > CMakeFiles/Reviiyot.dir/src/Card.cpp.i

CMakeFiles/Reviiyot.dir/src/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reviiyot.dir/src/Card.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/topaz/ClionProjects/Reviiyot/src/Card.cpp -o CMakeFiles/Reviiyot.dir/src/Card.cpp.s

CMakeFiles/Reviiyot.dir/src/Card.cpp.o.requires:

.PHONY : CMakeFiles/Reviiyot.dir/src/Card.cpp.o.requires

CMakeFiles/Reviiyot.dir/src/Card.cpp.o.provides: CMakeFiles/Reviiyot.dir/src/Card.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reviiyot.dir/build.make CMakeFiles/Reviiyot.dir/src/Card.cpp.o.provides.build
.PHONY : CMakeFiles/Reviiyot.dir/src/Card.cpp.o.provides

CMakeFiles/Reviiyot.dir/src/Card.cpp.o.provides.build: CMakeFiles/Reviiyot.dir/src/Card.cpp.o


CMakeFiles/Reviiyot.dir/src/Deck.cpp.o: CMakeFiles/Reviiyot.dir/flags.make
CMakeFiles/Reviiyot.dir/src/Deck.cpp.o: ../src/Deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Reviiyot.dir/src/Deck.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reviiyot.dir/src/Deck.cpp.o -c /home/topaz/ClionProjects/Reviiyot/src/Deck.cpp

CMakeFiles/Reviiyot.dir/src/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reviiyot.dir/src/Deck.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/topaz/ClionProjects/Reviiyot/src/Deck.cpp > CMakeFiles/Reviiyot.dir/src/Deck.cpp.i

CMakeFiles/Reviiyot.dir/src/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reviiyot.dir/src/Deck.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/topaz/ClionProjects/Reviiyot/src/Deck.cpp -o CMakeFiles/Reviiyot.dir/src/Deck.cpp.s

CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.requires:

.PHONY : CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.requires

CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.provides: CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reviiyot.dir/build.make CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.provides.build
.PHONY : CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.provides

CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.provides.build: CMakeFiles/Reviiyot.dir/src/Deck.cpp.o


CMakeFiles/Reviiyot.dir/src/Game.cpp.o: CMakeFiles/Reviiyot.dir/flags.make
CMakeFiles/Reviiyot.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Reviiyot.dir/src/Game.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reviiyot.dir/src/Game.cpp.o -c /home/topaz/ClionProjects/Reviiyot/src/Game.cpp

CMakeFiles/Reviiyot.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reviiyot.dir/src/Game.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/topaz/ClionProjects/Reviiyot/src/Game.cpp > CMakeFiles/Reviiyot.dir/src/Game.cpp.i

CMakeFiles/Reviiyot.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reviiyot.dir/src/Game.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/topaz/ClionProjects/Reviiyot/src/Game.cpp -o CMakeFiles/Reviiyot.dir/src/Game.cpp.s

CMakeFiles/Reviiyot.dir/src/Game.cpp.o.requires:

.PHONY : CMakeFiles/Reviiyot.dir/src/Game.cpp.o.requires

CMakeFiles/Reviiyot.dir/src/Game.cpp.o.provides: CMakeFiles/Reviiyot.dir/src/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reviiyot.dir/build.make CMakeFiles/Reviiyot.dir/src/Game.cpp.o.provides.build
.PHONY : CMakeFiles/Reviiyot.dir/src/Game.cpp.o.provides

CMakeFiles/Reviiyot.dir/src/Game.cpp.o.provides.build: CMakeFiles/Reviiyot.dir/src/Game.cpp.o


CMakeFiles/Reviiyot.dir/src/Hand.cpp.o: CMakeFiles/Reviiyot.dir/flags.make
CMakeFiles/Reviiyot.dir/src/Hand.cpp.o: ../src/Hand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Reviiyot.dir/src/Hand.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reviiyot.dir/src/Hand.cpp.o -c /home/topaz/ClionProjects/Reviiyot/src/Hand.cpp

CMakeFiles/Reviiyot.dir/src/Hand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reviiyot.dir/src/Hand.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/topaz/ClionProjects/Reviiyot/src/Hand.cpp > CMakeFiles/Reviiyot.dir/src/Hand.cpp.i

CMakeFiles/Reviiyot.dir/src/Hand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reviiyot.dir/src/Hand.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/topaz/ClionProjects/Reviiyot/src/Hand.cpp -o CMakeFiles/Reviiyot.dir/src/Hand.cpp.s

CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.requires:

.PHONY : CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.requires

CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.provides: CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reviiyot.dir/build.make CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.provides.build
.PHONY : CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.provides

CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.provides.build: CMakeFiles/Reviiyot.dir/src/Hand.cpp.o


CMakeFiles/Reviiyot.dir/src/Player.cpp.o: CMakeFiles/Reviiyot.dir/flags.make
CMakeFiles/Reviiyot.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Reviiyot.dir/src/Player.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reviiyot.dir/src/Player.cpp.o -c /home/topaz/ClionProjects/Reviiyot/src/Player.cpp

CMakeFiles/Reviiyot.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reviiyot.dir/src/Player.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/topaz/ClionProjects/Reviiyot/src/Player.cpp > CMakeFiles/Reviiyot.dir/src/Player.cpp.i

CMakeFiles/Reviiyot.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reviiyot.dir/src/Player.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/topaz/ClionProjects/Reviiyot/src/Player.cpp -o CMakeFiles/Reviiyot.dir/src/Player.cpp.s

CMakeFiles/Reviiyot.dir/src/Player.cpp.o.requires:

.PHONY : CMakeFiles/Reviiyot.dir/src/Player.cpp.o.requires

CMakeFiles/Reviiyot.dir/src/Player.cpp.o.provides: CMakeFiles/Reviiyot.dir/src/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reviiyot.dir/build.make CMakeFiles/Reviiyot.dir/src/Player.cpp.o.provides.build
.PHONY : CMakeFiles/Reviiyot.dir/src/Player.cpp.o.provides

CMakeFiles/Reviiyot.dir/src/Player.cpp.o.provides.build: CMakeFiles/Reviiyot.dir/src/Player.cpp.o


CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o: CMakeFiles/Reviiyot.dir/flags.make
CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o: ../src/reviiyot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o -c /home/topaz/ClionProjects/Reviiyot/src/reviiyot.cpp

CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/topaz/ClionProjects/Reviiyot/src/reviiyot.cpp > CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.i

CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/topaz/ClionProjects/Reviiyot/src/reviiyot.cpp -o CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.s

CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.requires:

.PHONY : CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.requires

CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.provides: CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reviiyot.dir/build.make CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.provides.build
.PHONY : CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.provides

CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.provides.build: CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o


# Object files for target Reviiyot
Reviiyot_OBJECTS = \
"CMakeFiles/Reviiyot.dir/src/Card.cpp.o" \
"CMakeFiles/Reviiyot.dir/src/Deck.cpp.o" \
"CMakeFiles/Reviiyot.dir/src/Game.cpp.o" \
"CMakeFiles/Reviiyot.dir/src/Hand.cpp.o" \
"CMakeFiles/Reviiyot.dir/src/Player.cpp.o" \
"CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o"

# External object files for target Reviiyot
Reviiyot_EXTERNAL_OBJECTS =

Reviiyot: CMakeFiles/Reviiyot.dir/src/Card.cpp.o
Reviiyot: CMakeFiles/Reviiyot.dir/src/Deck.cpp.o
Reviiyot: CMakeFiles/Reviiyot.dir/src/Game.cpp.o
Reviiyot: CMakeFiles/Reviiyot.dir/src/Hand.cpp.o
Reviiyot: CMakeFiles/Reviiyot.dir/src/Player.cpp.o
Reviiyot: CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o
Reviiyot: CMakeFiles/Reviiyot.dir/build.make
Reviiyot: CMakeFiles/Reviiyot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Reviiyot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Reviiyot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Reviiyot.dir/build: Reviiyot

.PHONY : CMakeFiles/Reviiyot.dir/build

CMakeFiles/Reviiyot.dir/requires: CMakeFiles/Reviiyot.dir/src/Card.cpp.o.requires
CMakeFiles/Reviiyot.dir/requires: CMakeFiles/Reviiyot.dir/src/Deck.cpp.o.requires
CMakeFiles/Reviiyot.dir/requires: CMakeFiles/Reviiyot.dir/src/Game.cpp.o.requires
CMakeFiles/Reviiyot.dir/requires: CMakeFiles/Reviiyot.dir/src/Hand.cpp.o.requires
CMakeFiles/Reviiyot.dir/requires: CMakeFiles/Reviiyot.dir/src/Player.cpp.o.requires
CMakeFiles/Reviiyot.dir/requires: CMakeFiles/Reviiyot.dir/src/reviiyot.cpp.o.requires

.PHONY : CMakeFiles/Reviiyot.dir/requires

CMakeFiles/Reviiyot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Reviiyot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Reviiyot.dir/clean

CMakeFiles/Reviiyot.dir/depend:
	cd /home/topaz/ClionProjects/Reviiyot/cmake-build-default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/topaz/ClionProjects/Reviiyot /home/topaz/ClionProjects/Reviiyot /home/topaz/ClionProjects/Reviiyot/cmake-build-default /home/topaz/ClionProjects/Reviiyot/cmake-build-default /home/topaz/ClionProjects/Reviiyot/cmake-build-default/CMakeFiles/Reviiyot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Reviiyot.dir/depend

