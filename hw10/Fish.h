#ifndef FISH_H
#define FISH_H
#include <cstdlib>
#include "Angle.h"
//Fish header for hw10
class Fish{

private:
	double x;
	double y;
	double speed;
	Angle<double> direction;
	Angle<double> turn_rate;
	
public: 
	Fish();
    virtual ~Fish();
	
	double getX() const;
	double getY() const;
	double getSpeed() const;
	double getDir() const;
	double getTurn() const;
	
	void setX(double x);
	void setY(double y);
	void setSpd(double speed);
	void setDir(double direction);
	void setTurn(double turn_rate);
	
	void swim();


}; 

#endif