#ifndef ANGLE2_H
#define ANGLE2_H

//Used for hw09
class Angle2{

private:
	double x;
	mutable double Sin;
	mutable double Cos;
	mutable bool have_Sin;
	mutable bool have_Cos;
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