#include <cstdio>
#include <iostream>
#include "Log.h"
#include "Fish.h"
#include "Angle.h"
#include <vector>

//This is the main for hw10
int main(int argc, char** argv){
	
	std::vector<Fish> number;

	for(std::vector<Fish>::iterator it = number.begin(); it != number.end(); ++it){
		
			int element=*it;
			std::cout << element<<std::endl;
	}
}