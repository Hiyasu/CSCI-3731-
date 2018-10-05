#ifndef WRITEJPEG_H
#define WRITEJPEG_H
#include <cstdio>
#include "jpeglib.h"
#include <stdio.h>
#include <setjmp.h>
//Doesn't work with the header file
void writejpeg(const char* file2, unsigned char* array, int width, int height, int quality);

#endif