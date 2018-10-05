#include "jpeglib.h"
#include <stdio.h>
#include <setjmp.h>
#include <cstdio>
#include "read.cc"
#include "writejpeg.cc"

int main(int argc, char** argv){

	char file[50]="test.ppm";
	char file2[50]="test2.ppm";
	char header[3];
	int width=0;
	int height=0;
	int numPixels=0;
	int size=128;
	
	//Read the file and put binary into array data
	unsigned char* data=read(file, header, &width, &height, &numPixels);
	//Call write file with data array as argument
	writejpeg(file2, data, width, height, numPixels);

	delete [] data;
	data=NULL;
}