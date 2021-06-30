del *.exe
del *.obj
cl /c /W4 Start.c
link Start.obj
pause