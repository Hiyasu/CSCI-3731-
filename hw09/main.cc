#include <cstdio>
#include <iostream>
#include "Log.h"
int main(int argc, char** argv){

	Log& log = Log::getInstance();
	
	log.printStuff("Here it is\n");

}