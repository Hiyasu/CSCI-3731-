#include "Angle2.h"
#include <cstdio>
#include <iostream>
#include <cmath>
#include "Fish.h"
//Used for hw08, parts come from Angle class of hw07
//Constructor
Angle2::Angle2(){
	this->x=0.0;
	this->have_Sin=false;
	this->have_Cos=false;
	
}
//Destructor
Angle2::~Angle2() {
    
    printf("destructing %1.2f\n", x);
    
}

//Get methods
double Angle2::getX() const {
    
    return x;
    
} 

//Setters
void Angle2::set(double x) {
    
    this->x = x;

}

double Angle2::getSin() const{
	
	if(!have_Sin){
		this->Sin=sin(this->x*M_PI/180.0);
		have_Sin=true;
	}
	return this->Sin;
}

double Angle2::getCos() const{
	
	if(!have_Cos){
		this->Cos=cos(this->x*M_PI/180.0);
		have_Cos=true;
	}
	return this->Cos;
}



const Angle2& Angle2::operator+=(const Angle2& a){
	this->x+=a.x;
	
	while(this->x>=360) this->x-=360;
	while(this->x<0) this->x+=360;
	
	return *this;
}

const Angle2& Angle2::operator-=(const Angle2& a){
	this->x-=a.x;
	
	while(this->x>=360) this->x-=360;
	while(this->x<0) this->x+=360;
	
	return *this;
}
