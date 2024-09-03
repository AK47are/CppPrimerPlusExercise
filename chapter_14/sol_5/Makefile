a.out: pe14-5.o useemp1.o
	clang++ pe14-5.o useemp1.o

pe14-5.o: pe14-5.cpp emp.h
	clang++ pe14-5.cpp -c

useremp1.o: useremp1.cpp emp.h
	clang++ useemp1.cpp -c

.PHONY: clean

clean: 
	-rm pe14-5.o useemp1.o

