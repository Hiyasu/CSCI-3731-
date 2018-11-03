#include "DrunkenFish.h"

DrunkenFish::DrunkenFish()
		:Fish(){
		
}

void DrunkenFish::swim(){
	int choice=rand()%4;
	
	if(choice==0) x+= speed;
	else if(choice==1) y+=speed;
	else if(choice==2) x-=speed;
	else 			   y-=speed;
}