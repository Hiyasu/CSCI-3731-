#ifndef ANGLE2_H
#define ANGLE2_H
//hw08
class Angle2{

private:
	double x;
	mutable double Sin;
	mutable double Cos;
	mutable bool have_Sin;
	mutable bool have_Cos;
public: 
	Angle2();
    virtual ~Angle2();
	
	double getX() const;
	
	void set(double x);
	
	double getSin() const;
	
	double getCos() const;

	const Angle2& operator+=(const Angle2& a);
	
	const Angle2& operator-=(const Angle2& a);

}; //End of Angle2 class

#endif