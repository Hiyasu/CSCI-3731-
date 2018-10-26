#ifndef FISH_H
#define FISH_H

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
	
	void set(double x);
	void set(double y);


}; 

#endif