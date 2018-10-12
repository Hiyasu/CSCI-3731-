#include <cstdio>
#include <setjmp.h>
#include "read.h"
#include "writejpeg.h"

int main(int argc, char** argv){

	FILE* file=fopen("test.ppm", "rb");
	FILE* file2=fopen("test2.jpeg","wb");
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
	
	fclose(file2);
	fclose(file);
}