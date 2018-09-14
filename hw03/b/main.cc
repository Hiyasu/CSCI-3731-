#include <cstdio>
#include "swap.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	int num1;
	int num2;
	
	cout <<"This program will swap the values of two variables: \n";
	cout <<"Enter an integer: ";
	cin >>num1;
	
	cout <<"Enter a second integer: ";
	cin >>num2;
	printf("Before swap: \n");
	printf("First Number: %d\n", num1);
	printf("Second Number: %d\n", num2);
	swap(&num1, &num2);
	
	printf("After swap: \n");
	printf("First Number: %d\n", num1);
	printf("Second Number: %d\n", num2);

	
}