#ifndef ANGLE2_H
#define ANGLE2_H

class Angle2{

private:
	mutable double x;
	mutable bool have_angle;
public: 
	Angle2(double x);
    virtual ~Angle2();
	
	double getX() const;
	
	void set(double x);
	
	double getSin() const;
	
	double getCos() const;

	const Angle2& operator+=(const Angle2& a);
	
	const Angle2& operator-=(const Angle2& a);

}; //End of Angle2 class

#endif