# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nano/openair-cn/build/mme

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nano/openair-cn/build/mme/build

# Include any dependencies generated for this target.
include CMakeFiles/SCTP_SERVER.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SCTP_SERVER.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SCTP_SERVER.dir/flags.make

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o: CMakeFiles/SCTP_SERVER.dir/flags.make
CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o: /home/nano/openair-cn/src/sctp/sctp_common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/mme/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o   -c /home/nano/openair-cn/src/sctp/sctp_common.c

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sctp/sctp_common.c > CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.i

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sctp/sctp_common.c -o CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.s

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.requires:

.PHONY : CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.requires

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.provides: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.requires
	$(MAKE) -f CMakeFiles/SCTP_SERVER.dir/build.make CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.provides.build
.PHONY : CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.provides

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.provides.build: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o


CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o: CMakeFiles/SCTP_SERVER.dir/flags.make
CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o: /home/nano/openair-cn/src/sctp/sctp_itti_messaging.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/mme/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o   -c /home/nano/openair-cn/src/sctp/sctp_itti_messaging.c

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sctp/sctp_itti_messaging.c > CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.i

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sctp/sctp_itti_messaging.c -o CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.s

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.requires:

.PHONY : CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.requires

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.provides: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.requires
	$(MAKE) -f CMakeFiles/SCTP_SERVER.dir/build.make CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.provides.build
.PHONY : CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.provides

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.provides.build: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o


CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o: CMakeFiles/SCTP_SERVER.dir/flags.make
CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o: /home/nano/openair-cn/src/sctp/sctp_primitives_server.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/mme/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o   -c /home/nano/openair-cn/src/sctp/sctp_primitives_server.c

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sctp/sctp_primitives_server.c > CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.i

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sctp/sctp_primitives_server.c -o CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.s

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.requires:

.PHONY : CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.requires

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.provides: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.requires
	$(MAKE) -f CMakeFiles/SCTP_SERVER.dir/build.make CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.provides.build
.PHONY : CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.provides

CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.provides.build: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o


# Object files for target SCTP_SERVER
SCTP_SERVER_OBJECTS = \
"CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o" \
"CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o" \
"CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o"

# External object files for target SCTP_SERVER
SCTP_SERVER_EXTERNAL_OBJECTS =

libSCTP_SERVER.a: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o
libSCTP_SERVER.a: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o
libSCTP_SERVER.a: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o
libSCTP_SERVER.a: CMakeFiles/SCTP_SERVER.dir/build.make
libSCTP_SERVER.a: CMakeFiles/SCTP_SERVER.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nano/openair-cn/build/mme/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libSCTP_SERVER.a"
	$(CMAKE_COMMAND) -P CMakeFiles/SCTP_SERVER.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SCTP_SERVER.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SCTP_SERVER.dir/build: libSCTP_SERVER.a

.PHONY : CMakeFiles/SCTP_SERVER.dir/build

CMakeFiles/SCTP_SERVER.dir/requires: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_common.c.o.requires
CMakeFiles/SCTP_SERVER.dir/requires: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_itti_messaging.c.o.requires
CMakeFiles/SCTP_SERVER.dir/requires: CMakeFiles/SCTP_SERVER.dir/home/nano/openair-cn/src/sctp/sctp_primitives_server.c.o.requires

.PHONY : CMakeFiles/SCTP_SERVER.dir/requires

CMakeFiles/SCTP_SERVER.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SCTP_SERVER.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SCTP_SERVER.dir/clean

CMakeFiles/SCTP_SERVER.dir/depend:
	cd /home/nano/openair-cn/build/mme/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nano/openair-cn/build/mme /home/nano/openair-cn/build/mme /home/nano/openair-cn/build/mme/build /home/nano/openair-cn/build/mme/build /home/nano/openair-cn/build/mme/build/CMakeFiles/SCTP_SERVER.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SCTP_SERVER.dir/depend

