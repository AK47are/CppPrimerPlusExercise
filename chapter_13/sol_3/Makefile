a.out: test.o dma.o
	g++ test.o dma.o

test.o: test.cpp dma.h
	g++ -c test.cpp

dma.o: dma.cpp dma.h
	g++ -c dma.cpp
