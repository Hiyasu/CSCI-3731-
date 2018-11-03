#ifndef LOG_H
#define LOG_H
#include <iostream>
class Log {

private:
	Log();
	
public: 

	virtual ~Log();

	static Log& getInstance();
	
	void printStuff(const std::string& message) const;
	
}; //end of Log class

#endif