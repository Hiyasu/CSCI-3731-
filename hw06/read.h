#ifndef READ_H
#define READ_H
#include <cstdio>
#include "jpeglib.h"
#include <stdio.h>
#include <setjmp.h>
//Doesn't work with the header file
unsigned char* read(const char* file, char* header, int* width, int* height, int* numPixels);

#endif