#include <string.h>  /* Defines NULL and memset */
#include <stdlib.h>

#include "defines.h"


color_t * color_array = NULL;

color_t * calc_color(int * thunder_array) {

    /* Reserves space in memory for the array only the first time */
    if (color_array == NULL) {
        
        color_array = (color_t *)malloc(SIZE*SIZE*sizeof(color_t));
        memset(color_array, 0, SIZE*SIZE*sizeof(color_t));
    }

    for (int i = 0; i < (SIZE*SIZE); i++) {
        
        /* let set points be black */
        if (thunder_array[i] == 0) { 

            color_array[i].R = 0;
            color_array[i].G = 0;
            color_array[i].B = 0;
        }
        /* first fifth of the iterations goes from red to yellow */
        else { 

            color_array[i].R = 0;
            color_array[i].G = MAX/2;
            color_array[i].B = MAX/2;
        }
        /* second fifth of the iterations goes from yellow to green*/
    } 
    return color_array;
}