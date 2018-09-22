#include <cstdio>
#include "read.cc"
#include "write.cc"
int main(int argc, char** argv){

	//FILE* fp = fopen("test.ppm" , "rb");
	//FILE* fw = fopen("test2.ppm" , "wb");
	//This section only reads and prints the header of the ppm file
	char file[50]="test.ppm";
	char file2[50]="test2.ppm";
	char header[2];
	int width=0;
	int height=0;
	int numPixels=0;
	int size=128;
	
	unsigned char* data=read(file, header, &width, &height, &numPixels);
	//I can read to the file but I cannot write to it and I am stuck here
	//unsigned char* writtenData=write(file2, header, &width, &height, &numPixels);

}