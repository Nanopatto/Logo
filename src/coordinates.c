#include <string.h>  /* Defines NULL and memset */
#include <stdlib.h>

#include "defines.h"

coord_t * coord_array = NULL;

coord_t * calc_coord(coord_t * center, double amp) { 

    /* Reserves space in memory for the array only the first time */
    if (coord_array == NULL) {

        coord_array = (coord_t *)malloc(SIZE*SIZE*sizeof(coord_t));
        memset(coord_array, 0, SIZE*SIZE*sizeof(coord_t));
    }
    /* Construction of the array of coordinates */
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            coord_array[i*SIZE+j].x = center->x-amp+2*j*amp/(double)(SIZE-1);
            coord_array[i*SIZE+j].y = center->y+amp-2*i*amp/(double)(SIZE-1);
        }
    }  
    return coord_array;
}