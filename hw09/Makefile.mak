all: main 

Log.o: Log.cc Log.h
	g++ -c -Werror Log.cc
	
Angle2.o: Angle2.cc Angle2.h
	g++ -c -Werror Angle2.cc
	
main.o: main.cc Log.h Angle2.h 
	g++ -c -Werror main.cc
	
main: main.o Log.o Angle2.o 
	g++ -o main main.o Log.o Angle2.o 