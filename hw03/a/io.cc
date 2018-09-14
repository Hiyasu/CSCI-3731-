#include <cstdio>

int main(int argc, char** argv){
	FILE* fp=fopen("thing.txt", "r");
	
	int value=0;
	while(fscanf(fp, "%d", &value) !=EOF){
			printf("%d", value);
	}
	
	value+=1;
	fclose(fp);
	
	FILE* fw = fopen("thing.txt", "w");
	
	fprintf(fw, "Number of times run: %d", value);
	
	fclose(fw);
}
