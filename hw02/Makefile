all: main2

multiplication.o: multiplication.cc multiplication.h
	g++ -c -Werror multiplication.cc
	
main2.o: main2.cc multiplication.h
	g++ -c -Werror main2.cc 

main2: main2.o multiplication.o
	g++ -o main2 main2.o multiplication.o