#include <cstdio>
#include "multiplication.cc"
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int first;
	int second;
	
	cout <<"This program will show the product and division of 2 numbers: \n";
	
	cout <<"Enter the first number: ";
	cin >> first;
	
	cout <<"Enter the second number: ";
	cin >> second;
	
	
	printf("The product is: %d\n", multiplication(first, second));
}