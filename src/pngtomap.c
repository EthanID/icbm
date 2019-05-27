#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <png.h>

void printVersionErr() {
    fprintf(stderr, "Compilied with libpng %s.\n", PNG_LIBPNG_VER_STRING);
}

void pngToArray(char *filename) {
    FILE *fp = fopen(filename, "rb");
    if(fp == NULL) {
	fprintf(stderr, "Error opening file %s.", filename);
	return;
    }
    png_structp png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    if(!png) {
	fprintf(stderr, "Error, %s is not a png.", filename);
	return;
    }
    png_infop info = png_create_info_struct(png);
    if(!info) {
	fprintf(stderr, "Error reading info of %s.", filename);
	return;
    }


    fclose(fp);
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
	printf("Usage:\n\tpngtomap PNGFILE(S)\n");
    }
    else {
	for(int arg = 1; arg < argc; arg++) {
	    char filename[strlen(argv[arg])];
	    strcpy(filename, argv[arg]);
	    printf("Opening %s\n", filename);
	    pngToArray(filename);
	}
    }

    return 0;
}
