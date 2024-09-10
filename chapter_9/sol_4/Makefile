a.out: main.o sales.o
	g++ main.o sales.o

main.o: main.cpp sales.h
	g++ main.cpp -c

sales.o: sales.cpp sales.h
	g++ -c sales.cpp
