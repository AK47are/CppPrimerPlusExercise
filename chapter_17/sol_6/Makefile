a.out: main.o emp.o
	clang++ main.o emp.o

main.o: main.cpp emp.h
	clang++ main.cpp -c

emp.o: emp.cpp emp.h
	clang++ emp.cpp -c

.PHONY: clean

clean: 
	-rm main.o emp.o a.out
