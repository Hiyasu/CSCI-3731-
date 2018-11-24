#include "Population.h"
#include "Fish.h"
class Fish;
//For hw08
//Updated
Population::Population(){
	this->counter=0;
	this->max_fishes=1000;
	fishes=new Fish*[max_fishes];
}

Population::~Population(){

}

void Population::add(Fish* fishy){
	fishes[counter]=fishy;
	this->counter++;
}

void Population::remove(const Fish* fishy){
	for(int i=0; i<counter; i++)
	{
		if(fishes[i]==fishes[counter])
		{
			counter--;
			fishes[i]=fishes[counter]; //takes the fish at counter and puts it in the place where u want to remove the fish 
			fishes[counter]=NULL; //Set the empty space to NULL
		}
	}
	
}

const int Population::size() const{
	return this->counter;
}

Fish* Population::get(const int index) const{
	return fishes[index];
}

