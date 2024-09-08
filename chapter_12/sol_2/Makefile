a.out: main.o string2.o
	g++ main.o string2.o

main.o: main.cpp string2.h
	g++ -c main.cpp

string2.o: string2.cpp string2.h
	g++ -c string2.cpp
