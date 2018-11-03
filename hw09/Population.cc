#ifndef POPULATION_H
#define POPULATION_H
#include <cstdlib>

class Fish;
//Updated
class Population{

private:
	Fish** fishes;
	int max_fishes;
	int counter;
	
public:
	Population();
	virtual ~Population();
	
	void add(Fish* fishy);
	void remove(const Fish* fishy);
	const int size() const;
	Fish* get(const int index) const;


};

#endif