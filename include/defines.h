/* defines.h
 *
 *  Description: define structures, functions and important variables
 */

#define SIZE 1080     /* Amount of pixels per side*/

#define ITER 500     /* Amount of iterations    */

#define ZOOM 0.8    /* Scale of Zoom             */

#define EXIT 0      /* Used to exit the program  */

#define MAX 255   /* Max value for 8 bit variable, used in pixels */

typedef struct coord_s /* Structure of coordinates*/
{
    double x; /* Abscissa */
    double y; /* Ordinate */
} coord_t;

typedef struct color_s /* Structure of colors*/
{
    unsigned char R; /* Red */
    unsigned char G; /* Green */
    unsigned char B; /* Blue */
} color_t;

/* Functions*/
coord_t * calc_coord(coord_t * center, double amplitude);
int * calc_thunder(coord_t * coord_array);
color_t * calc_color(int * thunder_array);
void draw_img(color_t * color_array);