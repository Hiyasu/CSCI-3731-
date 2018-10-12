#include <cstdio>
#include "read.h"
unsigned char* read(const char* file, char* header, int *width, int *height, int *numPixels){
	
	FILE* fp = fopen(file , "rb");
	
	fscanf(fp , "%s\n%d %d\n%d\n", header, width, height, numPixels);
	printf("First line in the header: %s\n", header);
	printf("Width of the image: %d\n", *width); 
	printf("Height of the image: %d\n", *height);
	printf("Number of pixels: %d\n", *numPixels);
	
	int size=(*height)*3*(*width); //width*height 
	//int** array = new int*[*height];
	unsigned char* pixelData=new unsigned char[size];
	int check=fread(pixelData, sizeof(char), size, fp);
	printf("Size of the image: %d\nNumber of pixels read: %d\n", size, check);
	printf("Check output: %x\n", pixelData[2]);
	
	
	fclose(fp);
	return pixelData;
}