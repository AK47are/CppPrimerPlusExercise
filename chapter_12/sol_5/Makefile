a.out: main.o queue.o
	g++ main.o queue.o

main.o: main.cpp queue.h
	g++ -c main.cpp

queue.o: queue.cpp queue.h
	g++ -c queue.cpp
