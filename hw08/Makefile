all: main1

Log.o: Log.cc Log.h
	g++ -c -Werror Log.cc
	
Angle2.o: Angle2.cc Angle2.h
	g++ -c -Werror Angle2.cc
	
Fish.o: Fish.cc Fish.h
	g++ -c -Werror Fish.cc

Population.o: Population.cc Population.h
	g++ -c -Werror Population.cc
	
main.o: main.cc Log.h
	g++ -c -Werror main.cc
	
main1: main.o Log.o Angle2.o Fish.o Population.o
	g++ -o main main.o Log.o Angle2.o Fish.o Population.o