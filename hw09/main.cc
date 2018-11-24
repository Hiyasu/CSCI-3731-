#include <cstdio>
#include <iostream>
#include "Log.h"
#include "Angle2.h"
#include "Fish.h"
#include "Population.h"
int main(int argc, char** argv){

	Log& log = Log::getInstance();
	
	log.printStuff("Here it is\n");
	
	Angle2 angle1(45.0);
	Angle2 angle2(30.0);
	
	//Fish(x, y, speed, angle for direction, angle for turnrate)
	Fish* fish1=new Fish(1.0, 1.0, 3.0, angle1, angle2);
}