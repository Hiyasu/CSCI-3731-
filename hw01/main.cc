#include <cstdio>
#include <iostream>
using namespace std;

int addition(int x, int y)
{
		return x+y;
}
int main(int argc, char** argv)
{
	cout<<"Char: " <<sizeof(char);
	cout<<"Short:" <<sizeof(short);
	cout<<"Int: " <<sizeof(int);
	cout<<"Long: " <<sizeof(long);
	int num1=10, num2=5;
	printf("%d\n", addition(num1, num2));
	
} //end of main