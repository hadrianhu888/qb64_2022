@echo off
cd %0\..\
echo Recompiling...
cd ../c
c_compiler\bin\g++ -s -Wfatal-errors -w -Wall qbx.cpp  libqb\os\win\libqb_2_0.2_0000000000000.o  -D DEPENDENCY_NO_SOCKETS -D DEPENDENCY_NO_PRINTER -D DEPENDENCY_NO_ICON -D DEPENDENCY_NO_SCREENIMAGE   parts\core\os\win\src.a -lopengl32 -lglu32   -mwindows -static-libgcc -static-libstdc++ -D GLEW_STATIC -D FREEGLUT_STATIC     -lwinmm -o "..\..\untitled.exe"
pause
