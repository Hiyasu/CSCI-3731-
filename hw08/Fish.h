#ifndef FISH_H
#define FISH_H
#include <cstdlib>
#include "Angle.h"

class Population; //Forward declaration of Population class
class Fish{

private:
	double x;
	double y;
	mutable double speed;
	mutable double direction;
	mutable double turn_rate;
	
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