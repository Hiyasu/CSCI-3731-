all: main 
	
Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc
	
Fish.o: Fish.cc Fish.h
	g++ -c -Werror Fish.cc

main.o: main.cc 
	g++ -c -Werror main.cc
	
main: main.o 
	g++ -o main main.o Angle.o Fish.o 