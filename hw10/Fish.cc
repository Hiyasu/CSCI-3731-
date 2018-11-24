#include "Fish.h"
#include <cstdlib>
#include <iostream>
#include "Angle.h"
#include <vector>
//Fish class for hw10 
Fish::Fish(double x, double y, double spd, Angle<double> dir, Angle<double> turnrate){

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