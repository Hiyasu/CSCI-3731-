#ifndef WRITEJPEG_H
#define WRITEJPEG_H
#include <cstdio>
#include <jpeglib.h>
#include <setjmp.h>
#include "writejpeg.h"

void writejpeg(FILE* file2, unsigned char* array, int width, int height, int quality);

#endif