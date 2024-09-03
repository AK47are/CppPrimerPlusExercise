a.out:use_tv.o tv.o
	clang++ use_tv.o tv.o

tv.o:tv.cpp tv.h
	clang++ tv.cpp -c

use_tv.o:use_tv.cpp tv.h
	clang++ use_tv.cpp -c
