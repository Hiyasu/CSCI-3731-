all: main

read.o: read.cc
	g++ -c -Werror read.cc
	
main.o: main.cc read.cc
	g++ -c -Werror main.cc 
	
main: main.o read.o
	g++ -o main main.o read.o