# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\josep\Documents\Software\HeartlessHerosServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\josep\Documents\Software\HeartlessHerosServer

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files (x86)\CMake\bin\cmake.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files (x86)\CMake\bin\cmake-gui.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(CMAKE_COMMAND) -E cmake_progress_start C:\Users\josep\Documents\Software\HeartlessHerosServer\CMakeFiles C:\Users\josep\Documents\Software\HeartlessHerosServer\J118\CMakeFiles\progress.marks
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f CMakeFiles\Makefile2 J118/all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\josep\Documents\Software\HeartlessHerosServer\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f CMakeFiles\Makefile2 J118/clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f CMakeFiles\Makefile2 J118/preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f CMakeFiles\Makefile2 J118/preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

# Convenience name for target.
J118/CMakeFiles/J118.dir/rule:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f CMakeFiles\Makefile2 J118/CMakeFiles/J118.dir/rule
.PHONY : J118/CMakeFiles/J118.dir/rule

# Convenience name for target.
J118: J118/CMakeFiles/J118.dir/rule

.PHONY : J118

# fast build rule for target.
J118/fast:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/build
.PHONY : J118/fast

src/Exception.obj: src/Exception.cpp.obj

.PHONY : src/Exception.obj

# target to build an object file
src/Exception.cpp.obj:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Exception.cpp.obj
.PHONY : src/Exception.cpp.obj

src/Exception.i: src/Exception.cpp.i

.PHONY : src/Exception.i

# target to preprocess a source file
src/Exception.cpp.i:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Exception.cpp.i
.PHONY : src/Exception.cpp.i

src/Exception.s: src/Exception.cpp.s

.PHONY : src/Exception.s

# target to generate assembly for a file
src/Exception.cpp.s:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Exception.cpp.s
.PHONY : src/Exception.cpp.s

src/Matrix.obj: src/Matrix.cpp.obj

.PHONY : src/Matrix.obj

# target to build an object file
src/Matrix.cpp.obj:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Matrix.cpp.obj
.PHONY : src/Matrix.cpp.obj

src/Matrix.i: src/Matrix.cpp.i

.PHONY : src/Matrix.i

# target to preprocess a source file
src/Matrix.cpp.i:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Matrix.cpp.i
.PHONY : src/Matrix.cpp.i

src/Matrix.s: src/Matrix.cpp.s

.PHONY : src/Matrix.s

# target to generate assembly for a file
src/Matrix.cpp.s:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Matrix.cpp.s
.PHONY : src/Matrix.cpp.s

src/Output.obj: src/Output.cpp.obj

.PHONY : src/Output.obj

# target to build an object file
src/Output.cpp.obj:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Output.cpp.obj
.PHONY : src/Output.cpp.obj

src/Output.i: src/Output.cpp.i

.PHONY : src/Output.i

# target to preprocess a source file
src/Output.cpp.i:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Output.cpp.i
.PHONY : src/Output.cpp.i

src/Output.s: src/Output.cpp.s

.PHONY : src/Output.s

# target to generate assembly for a file
src/Output.cpp.s:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Output.cpp.s
.PHONY : src/Output.cpp.s

src/Vector2D.obj: src/Vector2D.cpp.obj

.PHONY : src/Vector2D.obj

# target to build an object file
src/Vector2D.cpp.obj:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Vector2D.cpp.obj
.PHONY : src/Vector2D.cpp.obj

src/Vector2D.i: src/Vector2D.cpp.i

.PHONY : src/Vector2D.i

# target to preprocess a source file
src/Vector2D.cpp.i:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Vector2D.cpp.i
.PHONY : src/Vector2D.cpp.i

src/Vector2D.s: src/Vector2D.cpp.s

.PHONY : src/Vector2D.s

# target to generate assembly for a file
src/Vector2D.cpp.s:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(MAKE) -f J118\CMakeFiles\J118.dir\build.make J118/CMakeFiles/J118.dir/src/Vector2D.cpp.s
.PHONY : src/Vector2D.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... rebuild_cache
	@echo ... J118
	@echo ... edit_cache
	@echo ... src/Exception.obj
	@echo ... src/Exception.i
	@echo ... src/Exception.s
	@echo ... src/Matrix.obj
	@echo ... src/Matrix.i
	@echo ... src/Matrix.s
	@echo ... src/Output.obj
	@echo ... src/Output.i
	@echo ... src/Output.s
	@echo ... src/Vector2D.obj
	@echo ... src/Vector2D.i
	@echo ... src/Vector2D.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	cd /d C:\Users\josep\Documents\Software\HeartlessHerosServer && $(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

