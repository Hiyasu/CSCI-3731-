#include "Log.h"
#include <cstdio>
#include <iostream>

Log::Log(){
	
}
Log::~Log(){
	
}

Log& Log::getInstance(){
	
	static Log instance;
	return instance;

}

void Log:: printStuff(const std::string& message) const{
		std::cout <<message<<std::endl;
}