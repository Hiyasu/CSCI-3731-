#include "Fish.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>

//Constructor
Fish::Fish(double x, double y) {
	this->x=x;
	this->y=y;
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

//Setter
void Fish::set(double x) {
    
    this->x = x;
}

void Fish::set(double y){

	this->y = y;
}

void Fish::set(double speed){
	this->speed=speed;
}

void Fish::set(double direction){
	this->direction=direction;
}

void Fish::set(double turn_rate){
	this->turn_rate=turn_rate;
}

void Fish::swim(){
	
	int choice = rand()%3;
	
	if(choice==0) direction -= turn_rate;
	else if(choice==2) direction += turn_rate;
	
	x += speed * direction.getCos();
	y += speed * direction.getSin();

}