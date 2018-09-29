#include <cstdio>
#include "read.h"
#include "write.h"
//This is the main of Homework 5 modified from Homework 4
int main(int argc, char** argv){


	char file[50]="test.ppm";
	char file2[50]="test2.ppm";
	char header[3];
	int width=0;
	int height=0;
	int numPixels=0;
	
	//Read the file and put binary into array data
	unsigned char* data=read(file, header, &width, &height, &numPixels);
	//Call write file with data array as argument
	write(file2, (int)data, width, height, numPixels);

	delete [] data;
	data=NULL;

}