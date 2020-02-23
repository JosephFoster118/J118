# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joseph/Software/J118

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joseph/Software/J118

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/joseph/Software/J118/CMakeFiles /home/joseph/Software/J118/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/joseph/Software/J118/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named J118

# Build rule for target.
J118: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 J118
.PHONY : J118

# fast build rule for target.
J118/fast:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/build
.PHONY : J118/fast

src/ArgParse.o: src/ArgParse.cpp.o

.PHONY : src/ArgParse.o

# target to build an object file
src/ArgParse.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/ArgParse.cpp.o
.PHONY : src/ArgParse.cpp.o

src/ArgParse.i: src/ArgParse.cpp.i

.PHONY : src/ArgParse.i

# target to preprocess a source file
src/ArgParse.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/ArgParse.cpp.i
.PHONY : src/ArgParse.cpp.i

src/ArgParse.s: src/ArgParse.cpp.s

.PHONY : src/ArgParse.s

# target to generate assembly for a file
src/ArgParse.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/ArgParse.cpp.s
.PHONY : src/ArgParse.cpp.s

src/Concurrency/PeriodicThread.o: src/Concurrency/PeriodicThread.cpp.o

.PHONY : src/Concurrency/PeriodicThread.o

# target to build an object file
src/Concurrency/PeriodicThread.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Concurrency/PeriodicThread.cpp.o
.PHONY : src/Concurrency/PeriodicThread.cpp.o

src/Concurrency/PeriodicThread.i: src/Concurrency/PeriodicThread.cpp.i

.PHONY : src/Concurrency/PeriodicThread.i

# target to preprocess a source file
src/Concurrency/PeriodicThread.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Concurrency/PeriodicThread.cpp.i
.PHONY : src/Concurrency/PeriodicThread.cpp.i

src/Concurrency/PeriodicThread.s: src/Concurrency/PeriodicThread.cpp.s

.PHONY : src/Concurrency/PeriodicThread.s

# target to generate assembly for a file
src/Concurrency/PeriodicThread.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Concurrency/PeriodicThread.cpp.s
.PHONY : src/Concurrency/PeriodicThread.cpp.s

src/Concurrency/Thread.o: src/Concurrency/Thread.cpp.o

.PHONY : src/Concurrency/Thread.o

# target to build an object file
src/Concurrency/Thread.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Concurrency/Thread.cpp.o
.PHONY : src/Concurrency/Thread.cpp.o

src/Concurrency/Thread.i: src/Concurrency/Thread.cpp.i

.PHONY : src/Concurrency/Thread.i

# target to preprocess a source file
src/Concurrency/Thread.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Concurrency/Thread.cpp.i
.PHONY : src/Concurrency/Thread.cpp.i

src/Concurrency/Thread.s: src/Concurrency/Thread.cpp.s

.PHONY : src/Concurrency/Thread.s

# target to generate assembly for a file
src/Concurrency/Thread.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Concurrency/Thread.cpp.s
.PHONY : src/Concurrency/Thread.cpp.s

src/Exception.o: src/Exception.cpp.o

.PHONY : src/Exception.o

# target to build an object file
src/Exception.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Exception.cpp.o
.PHONY : src/Exception.cpp.o

src/Exception.i: src/Exception.cpp.i

.PHONY : src/Exception.i

# target to preprocess a source file
src/Exception.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Exception.cpp.i
.PHONY : src/Exception.cpp.i

src/Exception.s: src/Exception.cpp.s

.PHONY : src/Exception.s

# target to generate assembly for a file
src/Exception.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Exception.cpp.s
.PHONY : src/Exception.cpp.s

src/Graphics/Canvas.o: src/Graphics/Canvas.cpp.o

.PHONY : src/Graphics/Canvas.o

# target to build an object file
src/Graphics/Canvas.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/Canvas.cpp.o
.PHONY : src/Graphics/Canvas.cpp.o

src/Graphics/Canvas.i: src/Graphics/Canvas.cpp.i

.PHONY : src/Graphics/Canvas.i

# target to preprocess a source file
src/Graphics/Canvas.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/Canvas.cpp.i
.PHONY : src/Graphics/Canvas.cpp.i

src/Graphics/Canvas.s: src/Graphics/Canvas.cpp.s

.PHONY : src/Graphics/Canvas.s

# target to generate assembly for a file
src/Graphics/Canvas.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/Canvas.cpp.s
.PHONY : src/Graphics/Canvas.cpp.s

src/Graphics/Color.o: src/Graphics/Color.cpp.o

.PHONY : src/Graphics/Color.o

# target to build an object file
src/Graphics/Color.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/Color.cpp.o
.PHONY : src/Graphics/Color.cpp.o

src/Graphics/Color.i: src/Graphics/Color.cpp.i

.PHONY : src/Graphics/Color.i

# target to preprocess a source file
src/Graphics/Color.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/Color.cpp.i
.PHONY : src/Graphics/Color.cpp.i

src/Graphics/Color.s: src/Graphics/Color.cpp.s

.PHONY : src/Graphics/Color.s

# target to generate assembly for a file
src/Graphics/Color.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/Color.cpp.s
.PHONY : src/Graphics/Color.cpp.s

src/Graphics/FontMap.o: src/Graphics/FontMap.cpp.o

.PHONY : src/Graphics/FontMap.o

# target to build an object file
src/Graphics/FontMap.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/FontMap.cpp.o
.PHONY : src/Graphics/FontMap.cpp.o

src/Graphics/FontMap.i: src/Graphics/FontMap.cpp.i

.PHONY : src/Graphics/FontMap.i

# target to preprocess a source file
src/Graphics/FontMap.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/FontMap.cpp.i
.PHONY : src/Graphics/FontMap.cpp.i

src/Graphics/FontMap.s: src/Graphics/FontMap.cpp.s

.PHONY : src/Graphics/FontMap.s

# target to generate assembly for a file
src/Graphics/FontMap.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Graphics/FontMap.cpp.s
.PHONY : src/Graphics/FontMap.cpp.s

src/IPCallback.o: src/IPCallback.cpp.o

.PHONY : src/IPCallback.o

# target to build an object file
src/IPCallback.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/IPCallback.cpp.o
.PHONY : src/IPCallback.cpp.o

src/IPCallback.i: src/IPCallback.cpp.i

.PHONY : src/IPCallback.i

# target to preprocess a source file
src/IPCallback.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/IPCallback.cpp.i
.PHONY : src/IPCallback.cpp.i

src/IPCallback.s: src/IPCallback.cpp.s

.PHONY : src/IPCallback.s

# target to generate assembly for a file
src/IPCallback.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/IPCallback.cpp.s
.PHONY : src/IPCallback.cpp.s

src/Math/Matrix.o: src/Math/Matrix.cpp.o

.PHONY : src/Math/Matrix.o

# target to build an object file
src/Math/Matrix.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Matrix.cpp.o
.PHONY : src/Math/Matrix.cpp.o

src/Math/Matrix.i: src/Math/Matrix.cpp.i

.PHONY : src/Math/Matrix.i

# target to preprocess a source file
src/Math/Matrix.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Matrix.cpp.i
.PHONY : src/Math/Matrix.cpp.i

src/Math/Matrix.s: src/Math/Matrix.cpp.s

.PHONY : src/Math/Matrix.s

# target to generate assembly for a file
src/Math/Matrix.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Matrix.cpp.s
.PHONY : src/Math/Matrix.cpp.s

src/Math/Point2D.o: src/Math/Point2D.cpp.o

.PHONY : src/Math/Point2D.o

# target to build an object file
src/Math/Point2D.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Point2D.cpp.o
.PHONY : src/Math/Point2D.cpp.o

src/Math/Point2D.i: src/Math/Point2D.cpp.i

.PHONY : src/Math/Point2D.i

# target to preprocess a source file
src/Math/Point2D.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Point2D.cpp.i
.PHONY : src/Math/Point2D.cpp.i

src/Math/Point2D.s: src/Math/Point2D.cpp.s

.PHONY : src/Math/Point2D.s

# target to generate assembly for a file
src/Math/Point2D.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Point2D.cpp.s
.PHONY : src/Math/Point2D.cpp.s

src/Math/Polygon.o: src/Math/Polygon.cpp.o

.PHONY : src/Math/Polygon.o

# target to build an object file
src/Math/Polygon.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Polygon.cpp.o
.PHONY : src/Math/Polygon.cpp.o

src/Math/Polygon.i: src/Math/Polygon.cpp.i

.PHONY : src/Math/Polygon.i

# target to preprocess a source file
src/Math/Polygon.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Polygon.cpp.i
.PHONY : src/Math/Polygon.cpp.i

src/Math/Polygon.s: src/Math/Polygon.cpp.s

.PHONY : src/Math/Polygon.s

# target to generate assembly for a file
src/Math/Polygon.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Polygon.cpp.s
.PHONY : src/Math/Polygon.cpp.s

src/Math/Vector2D.o: src/Math/Vector2D.cpp.o

.PHONY : src/Math/Vector2D.o

# target to build an object file
src/Math/Vector2D.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Vector2D.cpp.o
.PHONY : src/Math/Vector2D.cpp.o

src/Math/Vector2D.i: src/Math/Vector2D.cpp.i

.PHONY : src/Math/Vector2D.i

# target to preprocess a source file
src/Math/Vector2D.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Vector2D.cpp.i
.PHONY : src/Math/Vector2D.cpp.i

src/Math/Vector2D.s: src/Math/Vector2D.cpp.s

.PHONY : src/Math/Vector2D.s

# target to generate assembly for a file
src/Math/Vector2D.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Math/Vector2D.cpp.s
.PHONY : src/Math/Vector2D.cpp.s

src/Output.o: src/Output.cpp.o

.PHONY : src/Output.o

# target to build an object file
src/Output.cpp.o:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Output.cpp.o
.PHONY : src/Output.cpp.o

src/Output.i: src/Output.cpp.i

.PHONY : src/Output.i

# target to preprocess a source file
src/Output.cpp.i:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Output.cpp.i
.PHONY : src/Output.cpp.i

src/Output.s: src/Output.cpp.s

.PHONY : src/Output.s

# target to generate assembly for a file
src/Output.cpp.s:
	$(MAKE) -f CMakeFiles/J118.dir/build.make CMakeFiles/J118.dir/src/Output.cpp.s
.PHONY : src/Output.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... install/strip"
	@echo "... edit_cache"
	@echo "... J118"
	@echo "... rebuild_cache"
	@echo "... list_install_components"
	@echo "... install/local"
	@echo "... install"
	@echo "... src/ArgParse.o"
	@echo "... src/ArgParse.i"
	@echo "... src/ArgParse.s"
	@echo "... src/Concurrency/PeriodicThread.o"
	@echo "... src/Concurrency/PeriodicThread.i"
	@echo "... src/Concurrency/PeriodicThread.s"
	@echo "... src/Concurrency/Thread.o"
	@echo "... src/Concurrency/Thread.i"
	@echo "... src/Concurrency/Thread.s"
	@echo "... src/Exception.o"
	@echo "... src/Exception.i"
	@echo "... src/Exception.s"
	@echo "... src/Graphics/Canvas.o"
	@echo "... src/Graphics/Canvas.i"
	@echo "... src/Graphics/Canvas.s"
	@echo "... src/Graphics/Color.o"
	@echo "... src/Graphics/Color.i"
	@echo "... src/Graphics/Color.s"
	@echo "... src/Graphics/FontMap.o"
	@echo "... src/Graphics/FontMap.i"
	@echo "... src/Graphics/FontMap.s"
	@echo "... src/IPCallback.o"
	@echo "... src/IPCallback.i"
	@echo "... src/IPCallback.s"
	@echo "... src/Math/Matrix.o"
	@echo "... src/Math/Matrix.i"
	@echo "... src/Math/Matrix.s"
	@echo "... src/Math/Point2D.o"
	@echo "... src/Math/Point2D.i"
	@echo "... src/Math/Point2D.s"
	@echo "... src/Math/Polygon.o"
	@echo "... src/Math/Polygon.i"
	@echo "... src/Math/Polygon.s"
	@echo "... src/Math/Vector2D.o"
	@echo "... src/Math/Vector2D.i"
	@echo "... src/Math/Vector2D.s"
	@echo "... src/Output.o"
	@echo "... src/Output.i"
	@echo "... src/Output.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

