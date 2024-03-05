@echo off

windres resources/resource.rc -O coff -o resources/res.o
gcc -O1 -s src/*.c resources/res.o -o skid-engine.exe

start skid-engine testfile.bat
del testfile.bat