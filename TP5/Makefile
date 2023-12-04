all: prog

prog : main.o mesfonctions.o
	gcc -o prog main.o mesfonctions.o
	
main.o : main.c
	gcc -o main.o -c main.c
mesfonctions.o: mesfonctions.c
	gcc -o mesfonctions.o -c mesfonctions.c