# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Jose\Documents\C++\CS 136 C++\Practice"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug"

# Include any dependencies generated for this target.
include BST\first_bst\CMakeFiles\firs_bst.dir\depend.make

# Include the progress variables for this target.
include BST\first_bst\CMakeFiles\firs_bst.dir\progress.make

# Include the compile flags for this target's objects.
include BST\first_bst\CMakeFiles\firs_bst.dir\flags.make

BST\first_bst\CMakeFiles\firs_bst.dir\main.cpp.obj: BST\first_bst\CMakeFiles\firs_bst.dir\flags.make
BST\first_bst\CMakeFiles\firs_bst.dir\main.cpp.obj: ..\BST\first_bst\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object BST/first_bst/CMakeFiles/firs_bst.dir/main.cpp.obj"
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1\BST\FIRST_~1
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\firs_bst.dir\main.cpp.obj /FdCMakeFiles\firs_bst.dir\ /FS -c "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\BST\first_bst\main.cpp"
<<
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1

BST\first_bst\CMakeFiles\firs_bst.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firs_bst.dir/main.cpp.i"
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1\BST\FIRST_~1
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\firs_bst.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\BST\first_bst\main.cpp"
<<
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1

BST\first_bst\CMakeFiles\firs_bst.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firs_bst.dir/main.cpp.s"
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1\BST\FIRST_~1
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\firs_bst.dir\main.cpp.s /c "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\BST\first_bst\main.cpp"
<<
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1

# Object files for target firs_bst
firs_bst_OBJECTS = \
"CMakeFiles\firs_bst.dir\main.cpp.obj"

# External object files for target firs_bst
firs_bst_EXTERNAL_OBJECTS =

BST\first_bst\firs_bst.exe: BST\first_bst\CMakeFiles\firs_bst.dir\main.cpp.obj
BST\first_bst\firs_bst.exe: BST\first_bst\CMakeFiles\firs_bst.dir\build.make
BST\first_bst\firs_bst.exe: BST\first_bst\CMakeFiles\firs_bst.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable firs_bst.exe"
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1\BST\FIRST_~1
	"C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\firs_bst.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\firs_bst.dir\objects1.rsp @<<
 /out:firs_bst.exe /implib:firs_bst.lib /pdb:"C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug\BST\first_bst\firs_bst.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1

# Rule to build all files generated by this target.
BST\first_bst\CMakeFiles\firs_bst.dir\build: BST\first_bst\firs_bst.exe

.PHONY : BST\first_bst\CMakeFiles\firs_bst.dir\build

BST\first_bst\CMakeFiles\firs_bst.dir\clean:
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1\BST\FIRST_~1
	$(CMAKE_COMMAND) -P CMakeFiles\firs_bst.dir\cmake_clean.cmake
	cd C:\Users\Jose\DOCUME~1\C__~1\CS136C~1\Practice\CMAKE-~1
.PHONY : BST\first_bst\CMakeFiles\firs_bst.dir\clean

BST\first_bst\CMakeFiles\firs_bst.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Jose\Documents\C++\CS 136 C++\Practice" "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\BST\first_bst" "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug" "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug\BST\first_bst" "C:\Users\Jose\Documents\C++\CS 136 C++\Practice\cmake-build-debug\BST\first_bst\CMakeFiles\firs_bst.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : BST\first_bst\CMakeFiles\firs_bst.dir\depend

