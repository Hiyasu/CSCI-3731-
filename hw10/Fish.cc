#include "Fish.h"
#include "Population.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "Angle.h"
//Fish class for hw10
//Constructor w/o arguments
Fish::Fish() {
	this->x=0.0;
	this->y=0.0;
	speed=0.0;
	
}

//Destructor
Fish::~Fish(){
    
    printf("destructing %1.2f\n", x);
    
}

//Get methods
double Fish::getX() const {
    
    return x;
    
} 

double Fish::getY() const{
	return y;
}

double Fish::getSpeed() const{
	return speed;
	
}



//Setters
void Fish::setX(double x) {
    
    this->x = x;
}

void Fish::setY(double y){

	this->y = y;
}

void Fish::setSpd(double speed){
	this->speed=speed;
}



void Fish::swim(){
	
	int choice = rand()%3;
	
	if(choice==0) this->direction -= turn_rate;
	else if(choice==2) this->direction += turn_rate;
	
	this->x += speed * direction.getCos();
	this->y += speed * direction.getSin();

}