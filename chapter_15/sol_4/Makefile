a.out:use_sales.o sales.o
	clang++ use_sales.o sales.o

use_sales.o:use_sales.cpp sales.h
	clang++ use_sales.cpp -c

sales.o:sales.o sales.h
	clang++ sales.cpp -c
