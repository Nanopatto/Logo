#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "defines.h"

#define PI 3.141592654
/*
 * Different heights
 */
#define L5 10
#define L4 7
#define L3 6
#define L2 5
#define L1 4
#define L0 0
/*
 * Angles of lower triangle
 */
#define A1 28
#define A2 42
/*
 * Angles of middle block
 */
#define A3 37
#define A4 52
/*
 * Angles of top block
 */
#define A5 48
#define A6 66

/*
 * Clean memory set for the Mandelbrot Set array
 */
int * thunder_array = NULL;

/*
 * Function that calculates a Mandelbrot set and appends it to a struct
 */
int * calc_thunder(coord_t * coord_array) {

	double x, y, ang;

    if (thunder_array == NULL) {
		thunder_array = (int *)malloc(SIZE*SIZE*sizeof(int));
	    memset(thunder_array, 0, SIZE*SIZE*sizeof(int));
	}

	/* Goes through all the elements of the coordinates array */
    for (int i = 0; i < (SIZE*SIZE); i++) {

		x = coord_array[i].x;
    	y = coord_array[i].y;
		//ang = atan2(y,x)*180/PI;
		ang = 950*(y/x)/43+1401/86;

		thunder_array[i] = 1;

		if (y < L1 && y > L0) {

			if (ang > A1 && ang < A2) {
				thunder_array[i] = 0;
			}	
		}
		else if (y < L3 && y > L2) {

			if (ang > A3 && ang < A4) {
				thunder_array[i] = 0;
			}	
		}
		else if (y < L5 && y > L4) {

			if (ang > A5 && ang < A6) {
				thunder_array[i] = 0;
			}	
		}	
    }
    return thunder_array;
}