all: main

read.o: read.cc read.h
	g++ -c -Werror read.cc
	
writejpeg.o: writejpeg.cc writejpeg.h
	g++ -c -Werror writejpeg.cc
	
main.o: main.cc read.cc writejpeg.cc
	g++ -c -Werror main.cc 
	
main: main.o read.o writejpeg.o
	g++ -o main main.o read.o writejpeg.o -ljpeg