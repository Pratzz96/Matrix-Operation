#! bin/bash
operation:a15.o a16.o a17.o a18.o main.o 
	gcc -o operation a15.o a16.o a17.o a18.o main.o 
main.o:main.c a15.o a16.o a17.o a18.o prototypes.h 
	gcc -c main.c a15.c a16.c a17.c a18.c prototypes.h 
