#include <cstdio>


//Constructor
Angle::Angle(int x, int y){
	this->x=x;
	this->y=y;
	
}

//Destructor
Angle::~Angle() {
    
    printf("destructing %lf %lf\n", x, y);
    
}

//Get methods
int Angle::getX() const {
    
    return x;
    
} 

int Angle::getY() const {
    
    return y;
    
} 
//Setter
int Angle::set(int x, int y) {
    
    this->x = x;
    this->y = y;
    
}