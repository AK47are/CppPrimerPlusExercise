all: main.exe

main.exe: main.o
	clang++ -std=c++17 -Wall -O2 -o main.exe main.o

main.o: main.cpp
	clang++ -std=c++17 -Wall -O2 -c main.cpp -o main.o

clean:
	rm -f main.exe main.o

.PHONY: all clean
