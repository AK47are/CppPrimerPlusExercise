a.out:workermi.o workmi.o
	clang++ workermi.o workmi.o

workermi.o:workermi.cpp workermi.h
	clang++ workermi.cpp -c

workmi.o:workmi.cpp QueueTp.h
	clang++ workmi.cpp -c
