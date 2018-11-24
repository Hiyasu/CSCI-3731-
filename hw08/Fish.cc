#include "Fish.h"
#include "Log.h"
#include "Population.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "Angle2.h"
//For hw08
Fish::Fish(Population* fishTank){
	this->x=0.0;
	this->y=0.0;
	this->speed=0.0;
	this->tank=fishTank;
}

Fish::Fish(double point1, double point2, double spd, double dir, double turnrate):direction(0.0), turn_rate(0.0){
	this->x=point1;
	this->y=point2;
	this->speed=spd;
	this->tank=fishTank;

}

//Destructor
Fish::~Fish(){
    
    printf("destructing %1.2f\n", x);
    
}

double Fish::getX() const {
    
    return this->x;
    
} 

double Fish::getY() const{
	return this->y;
}

void Fish::setSpd(double spd){
	this->speed=spd;
}



void Fish::swim(){
	
	int choice = rand()%3;
	
	if(choice==0) direction -= turn_rate;
	else if(choice==2) direction += turn_rate;
	
	this->x += speed * direction.getCos();
	this->y += speed * direction.getSin();

}