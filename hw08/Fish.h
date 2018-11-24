#ifndef FISH_H
#define FISH_H
#include <cstdlib>
#include "Angle2.h"
//For hw08
class Population; //Forward declaration of Population class
class Fish{

private:
	double x;
	double y;
	double speed;
	Angle2 direction;
	Angle2 turn_rate;
	Population* tank;
	
public: 
	Fish(Population* fishTank);
	Fish(double x, double y, double spd, double dir, double turnrate);
    virtual ~Fish();
	
	double getX() const;
	double getY() const;
	void setSpd(double speed);
	void swim();
}; 

#endif