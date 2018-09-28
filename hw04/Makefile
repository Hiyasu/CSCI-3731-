all: main

read.o: read.cc read.h
	g++ -c -Werror read.cc
	
write.o: write.cc write.h
	g++ -c -Werror write.cc
	
main.o: main.cc read.h write.h
	g++ -c -Werror main.cc 
	
main: main.o read.o write.o
	g++ -o main main.o read.o write.o