# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /Users/opiskun/.brew/Cellar/cmake/3.18.3/bin/cmake

# The command to remove a file.
RM = /Users/opiskun/.brew/Cellar/cmake/3.18.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/opiskun/Desktop/uTracker-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/opiskun/Desktop/uTracker-master/build

# Include any dependencies generated for this target.
include server/CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include server/CMakeFiles/server.dir/flags.make

server/CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.o: server/CMakeFiles/server.dir/flags.make
server/CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.o: server/server_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/opiskun/Desktop/uTracker-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object server/CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.o"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.o -c /Users/opiskun/Desktop/uTracker-master/build/server/server_autogen/mocs_compilation.cpp

server/CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.i"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/opiskun/Desktop/uTracker-master/build/server/server_autogen/mocs_compilation.cpp > CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.i

server/CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.s"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/opiskun/Desktop/uTracker-master/build/server/server_autogen/mocs_compilation.cpp -o CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.s

server/CMakeFiles/server.dir/main.cpp.o: server/CMakeFiles/server.dir/flags.make
server/CMakeFiles/server.dir/main.cpp.o: ../server/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/opiskun/Desktop/uTracker-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object server/CMakeFiles/server.dir/main.cpp.o"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/main.cpp.o -c /Users/opiskun/Desktop/uTracker-master/server/main.cpp

server/CMakeFiles/server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/main.cpp.i"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/opiskun/Desktop/uTracker-master/server/main.cpp > CMakeFiles/server.dir/main.cpp.i

server/CMakeFiles/server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/main.cpp.s"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/opiskun/Desktop/uTracker-master/server/main.cpp -o CMakeFiles/server.dir/main.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/server.dir/main.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

server/server: server/CMakeFiles/server.dir/server_autogen/mocs_compilation.cpp.o
server/server: server/CMakeFiles/server.dir/main.cpp.o
server/server: server/CMakeFiles/server.dir/build.make
server/server: server/src/libserver_src.a
server/server: /usr/local/Cellar/qt/5.15.1/lib/QtWidgets.framework/QtWidgets
server/server: /usr/local/Cellar/qt/5.15.1/lib/QtGui.framework/QtGui
server/server: /usr/local/Cellar/qt/5.15.1/lib/QtNetwork.framework/QtNetwork
server/server: /usr/local/Cellar/qt/5.15.1/lib/QtSql.framework/QtSql
server/server: /usr/local/Cellar/qt/5.15.1/lib/QtCore.framework/QtCore
server/server: /usr/local/opt/openssl/lib/libssl.dylib
server/server: /usr/local/opt/openssl/lib/libcrypto.dylib
server/server: server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/opiskun/Desktop/uTracker-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable server"
	cd /Users/opiskun/Desktop/uTracker-master/build/server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
server/CMakeFiles/server.dir/build: server/server

.PHONY : server/CMakeFiles/server.dir/build

server/CMakeFiles/server.dir/clean:
	cd /Users/opiskun/Desktop/uTracker-master/build/server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : server/CMakeFiles/server.dir/clean

server/CMakeFiles/server.dir/depend:
	cd /Users/opiskun/Desktop/uTracker-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/opiskun/Desktop/uTracker-master /Users/opiskun/Desktop/uTracker-master/server /Users/opiskun/Desktop/uTracker-master/build /Users/opiskun/Desktop/uTracker-master/build/server /Users/opiskun/Desktop/uTracker-master/build/server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : server/CMakeFiles/server.dir/depend

