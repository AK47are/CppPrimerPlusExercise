run.exe : test.o
	clang test.o -o run.exe

test.o : test.cpp classic.h
	clang -c test.cpp

.PHONY : clean
clean :
	-del test.o run.exe
