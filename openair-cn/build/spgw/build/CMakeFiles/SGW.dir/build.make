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
CMAKE_SOURCE_DIR = /home/nano/openair-cn/build/spgw

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nano/openair-cn/build/spgw/build

# Include any dependencies generated for this target.
include CMakeFiles/SGW.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SGW.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SGW.dir/flags.make

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o: /home/nano/openair-cn/src/sgw/spgw_config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o   -c /home/nano/openair-cn/src/sgw/spgw_config.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/spgw_config.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/spgw_config.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o: /home/nano/openair-cn/src/sgw/pgw_config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o   -c /home/nano/openair-cn/src/sgw/pgw_config.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/pgw_config.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/pgw_config.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o: /home/nano/openair-cn/src/sgw/sgw_config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o   -c /home/nano/openair-cn/src/sgw/sgw_config.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/sgw_config.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/sgw_config.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o: /home/nano/openair-cn/src/sgw/s11_causes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o   -c /home/nano/openair-cn/src/sgw/s11_causes.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/s11_causes.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/s11_causes.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o: /home/nano/openair-cn/src/sgw/sgw_task.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o   -c /home/nano/openair-cn/src/sgw/sgw_task.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/sgw_task.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/sgw_task.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o: /home/nano/openair-cn/src/sgw/sgw_handlers.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o   -c /home/nano/openair-cn/src/sgw/sgw_handlers.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/sgw_handlers.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/sgw_handlers.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o: /home/nano/openair-cn/src/sgw/sgw_context_manager.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o   -c /home/nano/openair-cn/src/sgw/sgw_context_manager.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/sgw_context_manager.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/sgw_context_manager.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o: /home/nano/openair-cn/src/sgw/pgw_lite_paa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o   -c /home/nano/openair-cn/src/sgw/pgw_lite_paa.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/pgw_lite_paa.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/pgw_lite_paa.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o


CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o: CMakeFiles/SGW.dir/flags.make
CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o: /home/nano/openair-cn/src/sgw/pgw_pco.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o   -c /home/nano/openair-cn/src/sgw/pgw_pco.c

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/openair-cn/src/sgw/pgw_pco.c > CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.i

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/openair-cn/src/sgw/pgw_pco.c -o CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.s

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.requires:

.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.requires

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.provides: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.requires
	$(MAKE) -f CMakeFiles/SGW.dir/build.make CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.provides.build
.PHONY : CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.provides

CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.provides.build: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o


# Object files for target SGW
SGW_OBJECTS = \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o" \
"CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o"

# External object files for target SGW
SGW_EXTERNAL_OBJECTS =

libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o
libSGW.a: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o
libSGW.a: CMakeFiles/SGW.dir/build.make
libSGW.a: CMakeFiles/SGW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nano/openair-cn/build/spgw/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C static library libSGW.a"
	$(CMAKE_COMMAND) -P CMakeFiles/SGW.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SGW.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SGW.dir/build: libSGW.a

.PHONY : CMakeFiles/SGW.dir/build

CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/spgw_config.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_config.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_config.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/s11_causes.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_task.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_handlers.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/sgw_context_manager.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_lite_paa.c.o.requires
CMakeFiles/SGW.dir/requires: CMakeFiles/SGW.dir/home/nano/openair-cn/src/sgw/pgw_pco.c.o.requires

.PHONY : CMakeFiles/SGW.dir/requires

CMakeFiles/SGW.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SGW.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SGW.dir/clean

CMakeFiles/SGW.dir/depend:
	cd /home/nano/openair-cn/build/spgw/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nano/openair-cn/build/spgw /home/nano/openair-cn/build/spgw /home/nano/openair-cn/build/spgw/build /home/nano/openair-cn/build/spgw/build /home/nano/openair-cn/build/spgw/build/CMakeFiles/SGW.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SGW.dir/depend

