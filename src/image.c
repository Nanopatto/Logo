/* 
 * Code partially based on: stackoverflow autor mwfeanley
 * https://stackoverflow.com/questions/16636311/what-is-the-simplest-rgb-image-format
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "defines.h"

/* 
 * RGB Convert Function 
 */
#define hue(color_array) (h[0] = color_array.R, h[1] = color_array.G, h[2] = color_array.B, h)

void draw_img(color_t * color_array) {
    FILE *file = fopen("Arco_Logo.ppm", "wb");
    unsigned char h[3]; 
    
    /* 
     * Writes head of the file
     * Arguments: wide, height, max value 8bit
     */
    fprintf(file, "P6 %d %d %d\n", SIZE, SIZE, MAX);

    /* 
     * Writes pixel data to the file
     */
    for (int i=0; i < SIZE*SIZE; i++) {
        fwrite(hue(color_array[i]), 1, 3, file);
    }

    fclose(file);


}