#include "FlippyFish.h"


//Constructor
FlippyFish::FlippyFish()
	: Fish() {
	
}

void FlippyFish::swim(){
	int choice = rand()%3;
	
	if(choice==0) this->direction -= turn_rate;
	else if(choice==2) this->direction += turn_rate;
	
	this->x += speed * direction.getCos();
	this->y += speed * direction.getSin();
}