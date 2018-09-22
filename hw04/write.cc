//Stuck on this function, I am unable to write to the file. Get seg fault.
unsigned char* write(const char* file2, char* header, int* width, int* height, int* numPixels){

	FILE* fw = fopen(file2 , "wb");
	
	//Stuff for writing
	fscanf(fw , "%s\n%d %d\n%d\n", header, &width, &height, &numPixels);
	int size=423800;
	unsigned char* writeData=new unsigned char[size];
	fprintf(fw, "%s\n%d %d\n%d\n", "P6", width, height, numPixels);
	int check = fwrite(fw, sizeof(char), size, fw);
	printf("Data that needs to be written%d\n  Written data: %d\n", size, check);
	
	delete [] writeData;
	writeData=NULL;
	fclose(fw);
	return writeData;
}