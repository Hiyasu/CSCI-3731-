#ifndef FISH_H
#define FISH_H
#include <cstdlib>
class Fish{

private:
	double x;
	double y;
	double speed;
	double direction;
	double turn_rate;
	
public: 
	Fish(double x, double y);
    virtual ~Fish();
	
	double getX() const;
	double getY() const;
	double getSpeed() const;
	double getDir() const;
	double getTurn() const;
	
	void set(double x);
	void set(double y);
	void set(double speed);
	void set(double direction);
	void set(double turn_rate);
	
	void swim();


}; 

#endif