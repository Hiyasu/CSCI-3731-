all: main 
	
Fish.o: Fish.cc Fish.h
	g++ -c -Werror Fish.cc

main.o: main.cc Angle.h
	g++ -c -Werror main.cc
	
main: main.o 
	g++ -o main main.o Fish.o 