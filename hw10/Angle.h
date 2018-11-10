#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
#include <cmath>
#include <cstdio>
//Angle template for hw10
template<class T>class Angle {

private:
		T x;
		mutable T Sin;
		mutable T Cos;
		mutable bool have_Sin;
		mutable bool have_Cos;
public:
		
		//constructor
		Angle(T x){
			this->x=x;
			this->have_Sin=false;
			this->have_Cos=false;	
		}
		
		virtual ~Angle(){}
		
		double getSin() const{
	
			if(!have_Sin){
				this->Sin=sin(this->x*M_PI/180.0);
				have_Sin=true;
			}
			return this->Sin;
		}
		
		double getCos() const{
	
			if(!have_Cos){
				this->Cos=cos(this->x*M_PI/180.0);
				have_Cos=true;
			}
			return this->Cos;
		}
		const Angle& operator+=(const Angle& a){
			this->x+=a.x;
	
			while(this->x>=360) this->x-=360;
			while(this->x<0) this->x+=360;
	
			return *this;
		}
		
		const Angle& operator-=(const Angle& a){
			this->x-=a.x;
	
			while(this->x>=360) this->x-=360;
			while(this->x<0) this->x+=360;
	
			return *this;
		}
		
}; //end of Angle template

#endif