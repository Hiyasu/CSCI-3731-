all: main2

read2.o: read2.cc read.h
	g++ -c -Werror read2.cc
	
write2.o: write2.cc write.h
	g++ -c -Werror write.cc
	
main2.o: main2.cc read.h write.h
	g++ -c -Werror main2.cc 
	
main2: main2.o read2.o write2.o
	g++ -o main2 main2.o read2.o write2.o