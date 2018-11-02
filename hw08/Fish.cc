#include "Fish.h"
#include "Population.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>

//Constructor w/o arguments
Fish::Fish() {
	this->x=0.0;
	this->y=0.0;
	speed=0.0;
	direction=0.0;
	turn_rate=0.0;
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

double Fish::getDir() const{
	return direction;
}

double Fish::getTurn() const{
	return turn_rate;
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

void Fish::setDir(double direction){
	this->direction=direction;
}

void Fish::setTurn(double turn_rate){
	this->turn_rate=turn_rate;
}

void Fish::swim(){
	
	int choice = rand()%3;
	
	if(choice==0) this->direction -= turn_rate;
	else if(choice==2) this->direction += turn_rate;
	
	this->x += speed * direction.getCos();
	this->y += speed * direction.getSin();

}