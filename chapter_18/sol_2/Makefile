a.exe:main.o Cpmv.o
	clang -Wall main.o Cpmv.o

main.o:main.cpp Cpmv.h
	clang -c main.cpp

Cpmv.o:Cpmv.cpp Cpmv.h
	clang -c Cpmv.cpp

clean:
	rm -f a.exe Cpmv.o main.o

.PHONY:clean
