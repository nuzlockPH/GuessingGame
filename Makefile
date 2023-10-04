# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

# The CMake executable.
CMAKE_COMMAND = /data/data/ru.iiec.cxxdroid/files/bin/cmake

# The command to remove a file.
RM = /data/data/ru.iiec.cxxdroid/files/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /storage/emulated/0/Documents/Cxxdroid/cpp/Hangman

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /storage/emulated/0/Documents/Cxxdroid/cpp/Hangman

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/data/data/ru.iiec.cxxdroid/files/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/data/data/ru.iiec.cxxdroid/files/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /storage/emulated/0/Documents/Cxxdroid/cpp/Hangman/CMakeFiles /storage/emulated/0/Documents/Cxxdroid/cpp/Hangman//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /storage/emulated/0/Documents/Cxxdroid/cpp/Hangman/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Hangman

# Build rule for target.
Hangman: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Hangman
.PHONY : Hangman

# fast build rule for target.
Hangman/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/build
.PHONY : Hangman/fast

src/Box.o: src/Box.cpp.o
.PHONY : src/Box.o

# target to build an object file
src/Box.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Box.cpp.o
.PHONY : src/Box.cpp.o

src/Box.i: src/Box.cpp.i
.PHONY : src/Box.i

# target to preprocess a source file
src/Box.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Box.cpp.i
.PHONY : src/Box.cpp.i

src/Box.s: src/Box.cpp.s
.PHONY : src/Box.s

# target to generate assembly for a file
src/Box.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Box.cpp.s
.PHONY : src/Box.cpp.s

src/Buttons.o: src/Buttons.cpp.o
.PHONY : src/Buttons.o

# target to build an object file
src/Buttons.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Buttons.cpp.o
.PHONY : src/Buttons.cpp.o

src/Buttons.i: src/Buttons.cpp.i
.PHONY : src/Buttons.i

# target to preprocess a source file
src/Buttons.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Buttons.cpp.i
.PHONY : src/Buttons.cpp.i

src/Buttons.s: src/Buttons.cpp.s
.PHONY : src/Buttons.s

# target to generate assembly for a file
src/Buttons.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Buttons.cpp.s
.PHONY : src/Buttons.cpp.s

src/Colors.o: src/Colors.cpp.o
.PHONY : src/Colors.o

# target to build an object file
src/Colors.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Colors.cpp.o
.PHONY : src/Colors.cpp.o

src/Colors.i: src/Colors.cpp.i
.PHONY : src/Colors.i

# target to preprocess a source file
src/Colors.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Colors.cpp.i
.PHONY : src/Colors.cpp.i

src/Colors.s: src/Colors.cpp.s
.PHONY : src/Colors.s

# target to generate assembly for a file
src/Colors.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Colors.cpp.s
.PHONY : src/Colors.cpp.s

src/DifficultyScreen.o: src/DifficultyScreen.cpp.o
.PHONY : src/DifficultyScreen.o

# target to build an object file
src/DifficultyScreen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/DifficultyScreen.cpp.o
.PHONY : src/DifficultyScreen.cpp.o

src/DifficultyScreen.i: src/DifficultyScreen.cpp.i
.PHONY : src/DifficultyScreen.i

# target to preprocess a source file
src/DifficultyScreen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/DifficultyScreen.cpp.i
.PHONY : src/DifficultyScreen.cpp.i

src/DifficultyScreen.s: src/DifficultyScreen.cpp.s
.PHONY : src/DifficultyScreen.s

# target to generate assembly for a file
src/DifficultyScreen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/DifficultyScreen.cpp.s
.PHONY : src/DifficultyScreen.cpp.s

src/Display.o: src/Display.cpp.o
.PHONY : src/Display.o

# target to build an object file
src/Display.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Display.cpp.o
.PHONY : src/Display.cpp.o

src/Display.i: src/Display.cpp.i
.PHONY : src/Display.i

# target to preprocess a source file
src/Display.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Display.cpp.i
.PHONY : src/Display.cpp.i

src/Display.s: src/Display.cpp.s
.PHONY : src/Display.s

# target to generate assembly for a file
src/Display.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Display.cpp.s
.PHONY : src/Display.cpp.s

src/Errors.o: src/Errors.cpp.o
.PHONY : src/Errors.o

# target to build an object file
src/Errors.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Errors.cpp.o
.PHONY : src/Errors.cpp.o

src/Errors.i: src/Errors.cpp.i
.PHONY : src/Errors.i

# target to preprocess a source file
src/Errors.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Errors.cpp.i
.PHONY : src/Errors.cpp.i

src/Errors.s: src/Errors.cpp.s
.PHONY : src/Errors.s

# target to generate assembly for a file
src/Errors.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Errors.cpp.s
.PHONY : src/Errors.cpp.s

src/Event.o: src/Event.cpp.o
.PHONY : src/Event.o

# target to build an object file
src/Event.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Event.cpp.o
.PHONY : src/Event.cpp.o

src/Event.i: src/Event.cpp.i
.PHONY : src/Event.i

# target to preprocess a source file
src/Event.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Event.cpp.i
.PHONY : src/Event.cpp.i

src/Event.s: src/Event.cpp.s
.PHONY : src/Event.s

# target to generate assembly for a file
src/Event.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Event.cpp.s
.PHONY : src/Event.cpp.s

src/File.o: src/File.cpp.o
.PHONY : src/File.o

# target to build an object file
src/File.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/File.cpp.o
.PHONY : src/File.cpp.o

src/File.i: src/File.cpp.i
.PHONY : src/File.i

# target to preprocess a source file
src/File.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/File.cpp.i
.PHONY : src/File.cpp.i

src/File.s: src/File.cpp.s
.PHONY : src/File.s

# target to generate assembly for a file
src/File.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/File.cpp.s
.PHONY : src/File.cpp.s

src/Fonts.o: src/Fonts.cpp.o
.PHONY : src/Fonts.o

# target to build an object file
src/Fonts.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Fonts.cpp.o
.PHONY : src/Fonts.cpp.o

src/Fonts.i: src/Fonts.cpp.i
.PHONY : src/Fonts.i

# target to preprocess a source file
src/Fonts.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Fonts.cpp.i
.PHONY : src/Fonts.cpp.i

src/Fonts.s: src/Fonts.cpp.s
.PHONY : src/Fonts.s

# target to generate assembly for a file
src/Fonts.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Fonts.cpp.s
.PHONY : src/Fonts.cpp.s

src/GameScreen.o: src/GameScreen.cpp.o
.PHONY : src/GameScreen.o

# target to build an object file
src/GameScreen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/GameScreen.cpp.o
.PHONY : src/GameScreen.cpp.o

src/GameScreen.i: src/GameScreen.cpp.i
.PHONY : src/GameScreen.i

# target to preprocess a source file
src/GameScreen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/GameScreen.cpp.i
.PHONY : src/GameScreen.cpp.i

src/GameScreen.s: src/GameScreen.cpp.s
.PHONY : src/GameScreen.s

# target to generate assembly for a file
src/GameScreen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/GameScreen.cpp.s
.PHONY : src/GameScreen.cpp.s

src/Health.o: src/Health.cpp.o
.PHONY : src/Health.o

# target to build an object file
src/Health.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Health.cpp.o
.PHONY : src/Health.cpp.o

src/Health.i: src/Health.cpp.i
.PHONY : src/Health.i

# target to preprocess a source file
src/Health.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Health.cpp.i
.PHONY : src/Health.cpp.i

src/Health.s: src/Health.cpp.s
.PHONY : src/Health.s

# target to generate assembly for a file
src/Health.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Health.cpp.s
.PHONY : src/Health.cpp.s

src/Initialize.o: src/Initialize.cpp.o
.PHONY : src/Initialize.o

# target to build an object file
src/Initialize.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Initialize.cpp.o
.PHONY : src/Initialize.cpp.o

src/Initialize.i: src/Initialize.cpp.i
.PHONY : src/Initialize.i

# target to preprocess a source file
src/Initialize.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Initialize.cpp.i
.PHONY : src/Initialize.cpp.i

src/Initialize.s: src/Initialize.cpp.s
.PHONY : src/Initialize.s

# target to generate assembly for a file
src/Initialize.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Initialize.cpp.s
.PHONY : src/Initialize.cpp.s

src/Logic.o: src/Logic.cpp.o
.PHONY : src/Logic.o

# target to build an object file
src/Logic.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Logic.cpp.o
.PHONY : src/Logic.cpp.o

src/Logic.i: src/Logic.cpp.i
.PHONY : src/Logic.i

# target to preprocess a source file
src/Logic.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Logic.cpp.i
.PHONY : src/Logic.cpp.i

src/Logic.s: src/Logic.cpp.s
.PHONY : src/Logic.s

# target to generate assembly for a file
src/Logic.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Logic.cpp.s
.PHONY : src/Logic.cpp.s

src/RetryScreen.o: src/RetryScreen.cpp.o
.PHONY : src/RetryScreen.o

# target to build an object file
src/RetryScreen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/RetryScreen.cpp.o
.PHONY : src/RetryScreen.cpp.o

src/RetryScreen.i: src/RetryScreen.cpp.i
.PHONY : src/RetryScreen.i

# target to preprocess a source file
src/RetryScreen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/RetryScreen.cpp.i
.PHONY : src/RetryScreen.cpp.i

src/RetryScreen.s: src/RetryScreen.cpp.s
.PHONY : src/RetryScreen.s

# target to generate assembly for a file
src/RetryScreen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/RetryScreen.cpp.s
.PHONY : src/RetryScreen.cpp.s

src/Screen.o: src/Screen.cpp.o
.PHONY : src/Screen.o

# target to build an object file
src/Screen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Screen.cpp.o
.PHONY : src/Screen.cpp.o

src/Screen.i: src/Screen.cpp.i
.PHONY : src/Screen.i

# target to preprocess a source file
src/Screen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Screen.cpp.i
.PHONY : src/Screen.cpp.i

src/Screen.s: src/Screen.cpp.s
.PHONY : src/Screen.s

# target to generate assembly for a file
src/Screen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Screen.cpp.s
.PHONY : src/Screen.cpp.s

src/Start.o: src/Start.cpp.o
.PHONY : src/Start.o

# target to build an object file
src/Start.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Start.cpp.o
.PHONY : src/Start.cpp.o

src/Start.i: src/Start.cpp.i
.PHONY : src/Start.i

# target to preprocess a source file
src/Start.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Start.cpp.i
.PHONY : src/Start.cpp.i

src/Start.s: src/Start.cpp.s
.PHONY : src/Start.s

# target to generate assembly for a file
src/Start.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Start.cpp.s
.PHONY : src/Start.cpp.s

src/StartScreen.o: src/StartScreen.cpp.o
.PHONY : src/StartScreen.o

# target to build an object file
src/StartScreen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/StartScreen.cpp.o
.PHONY : src/StartScreen.cpp.o

src/StartScreen.i: src/StartScreen.cpp.i
.PHONY : src/StartScreen.i

# target to preprocess a source file
src/StartScreen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/StartScreen.cpp.i
.PHONY : src/StartScreen.cpp.i

src/StartScreen.s: src/StartScreen.cpp.s
.PHONY : src/StartScreen.s

# target to generate assembly for a file
src/StartScreen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/StartScreen.cpp.s
.PHONY : src/StartScreen.cpp.s

src/Text.o: src/Text.cpp.o
.PHONY : src/Text.o

# target to build an object file
src/Text.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Text.cpp.o
.PHONY : src/Text.cpp.o

src/Text.i: src/Text.cpp.i
.PHONY : src/Text.i

# target to preprocess a source file
src/Text.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Text.cpp.i
.PHONY : src/Text.cpp.i

src/Text.s: src/Text.cpp.s
.PHONY : src/Text.s

# target to generate assembly for a file
src/Text.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Text.cpp.s
.PHONY : src/Text.cpp.s

src/Word.o: src/Word.cpp.o
.PHONY : src/Word.o

# target to build an object file
src/Word.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Word.cpp.o
.PHONY : src/Word.cpp.o

src/Word.i: src/Word.cpp.i
.PHONY : src/Word.i

# target to preprocess a source file
src/Word.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Word.cpp.i
.PHONY : src/Word.cpp.i

src/Word.s: src/Word.cpp.s
.PHONY : src/Word.s

# target to generate assembly for a file
src/Word.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/Word.cpp.s
.PHONY : src/Word.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Hangman.dir/build.make CMakeFiles/Hangman.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Hangman"
	@echo "... src/Box.o"
	@echo "... src/Box.i"
	@echo "... src/Box.s"
	@echo "... src/Buttons.o"
	@echo "... src/Buttons.i"
	@echo "... src/Buttons.s"
	@echo "... src/Colors.o"
	@echo "... src/Colors.i"
	@echo "... src/Colors.s"
	@echo "... src/DifficultyScreen.o"
	@echo "... src/DifficultyScreen.i"
	@echo "... src/DifficultyScreen.s"
	@echo "... src/Display.o"
	@echo "... src/Display.i"
	@echo "... src/Display.s"
	@echo "... src/Errors.o"
	@echo "... src/Errors.i"
	@echo "... src/Errors.s"
	@echo "... src/Event.o"
	@echo "... src/Event.i"
	@echo "... src/Event.s"
	@echo "... src/File.o"
	@echo "... src/File.i"
	@echo "... src/File.s"
	@echo "... src/Fonts.o"
	@echo "... src/Fonts.i"
	@echo "... src/Fonts.s"
	@echo "... src/GameScreen.o"
	@echo "... src/GameScreen.i"
	@echo "... src/GameScreen.s"
	@echo "... src/Health.o"
	@echo "... src/Health.i"
	@echo "... src/Health.s"
	@echo "... src/Initialize.o"
	@echo "... src/Initialize.i"
	@echo "... src/Initialize.s"
	@echo "... src/Logic.o"
	@echo "... src/Logic.i"
	@echo "... src/Logic.s"
	@echo "... src/RetryScreen.o"
	@echo "... src/RetryScreen.i"
	@echo "... src/RetryScreen.s"
	@echo "... src/Screen.o"
	@echo "... src/Screen.i"
	@echo "... src/Screen.s"
	@echo "... src/Start.o"
	@echo "... src/Start.i"
	@echo "... src/Start.s"
	@echo "... src/StartScreen.o"
	@echo "... src/StartScreen.i"
	@echo "... src/StartScreen.s"
	@echo "... src/Text.o"
	@echo "... src/Text.i"
	@echo "... src/Text.s"
	@echo "... src/Word.o"
	@echo "... src/Word.i"
	@echo "... src/Word.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
