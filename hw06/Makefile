all: main

read.o: read.cc 
	g++ -c -Werror read.cc
	
writejpeg.o: writejpeg.cc 
	g++ -c -Werror writejpeg.cc
	
main.o: main.cc read.cc write.cc
	g++ -c -Werror main.cc 
	
main: main.o read.o writejpeg.o
	g++ -o main main.o read.o writejpeg.o