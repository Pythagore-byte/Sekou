all : prog
prog : main.o testSante.o
	gcc -o prog main.o testSante.o

main.o : main.c
	gcc -o main.o -c main.c

testSante.o : testSante.c
	gcc -o testSante.o -c testSante.c


