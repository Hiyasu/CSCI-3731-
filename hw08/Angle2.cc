#include "Angle2.h"
#include <cstdio>
#include <iostream>
#include <cmath>

//Used for hw08, parts come from Angle class of hw07
//Constructor
Angle2::Angle2(double x){
	this->x=x;
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
	have_Sin=false;
	have_Cos=false;
}

double Angle2::getSin() const{
	
	if(!have_sin){
		this->Sin=sin(this->x*M_PI/180.0);
		have_sin=true;
	}
	return this->Sin;
}

double Angle2::getCos() const{
	
	if(!have_cos){
		this->Cos=cos(this->x*M_PI/180.0);
		have_cos=true;
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
