#include <cstdio>
#include <jpeglib.h>
#include <cstdlib>
#include <setjmp.h>
#include "writejpeg.h"

//JSAMPLE is a data definition. Makes char file compatible. 
//JSAMPLE * image_buffer;	/* Points to large array of R,G,B-order data */
//const char* file2
//FILE* fileName
void writejpeg(FILE* file2, unsigned char* array, int width, int height, int quality){
	
	unsigned char * image_buffer=array;
	int image_height;	/* Number of rows in image */
    int image_width;		/* Number of columns in image */
	
	//quality is a number between 0-100 that you have to choose.
	struct jpeg_compress_struct cinfo;
	
	struct jpeg_error_mgr jerr;
	
	//FILE * outfile;
	unsigned char* row_pointer[1];
	int row_stride;
	
	cinfo.err=jpeg_std_error(&jerr);
	
	jpeg_create_compress(&cinfo);
	
	if (file2==NULL){
		fprintf(stderr, "Cannot open %s\n", file2);
		exit(1);
	}
	jpeg_stdio_dest(&cinfo, file2);
	
	cinfo.image_width=width;
	cinfo.image_height=height;
	cinfo.input_components=3;
	cinfo.in_color_space=JCS_RGB;
	
	jpeg_set_defaults(&cinfo);
	
	jpeg_set_quality(&cinfo, 100, TRUE);
	
	jpeg_start_compress(&cinfo, TRUE);
	
	row_stride=width*3;
	
	while (cinfo.next_scanline < cinfo.image_height){
		
		row_pointer[0]= & image_buffer[cinfo.next_scanline * row_stride];
		(void) jpeg_write_scanlines(&cinfo, row_pointer,1);
	}
	
	jpeg_finish_compress(&cinfo);
	
	//Close file and free up memory
	//fclose(outfile);
	jpeg_destroy_compress(&cinfo);
	

}