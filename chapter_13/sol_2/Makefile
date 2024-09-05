run.exe : test.o
	g++ test.o

test.o : test.cpp classic.h
	g++ -c test.cpp

.PHONY : clean
clean :
	-del test.o
