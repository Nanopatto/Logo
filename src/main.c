#include <stdlib.h>
#include <string.h>     /* Defines NULL and memset              */
#include <stdio.h>      /* Lets use printf                      */

#include "defines.h"

double amp = 6;       /* initial amplitude of the image       */

coord_t center = {5,5}; /* initial center of the graph image    */

int choice = 0;             /* variable to store user's choice      */

int main(void)
{
    while(1){

        /* Creates array of coordinates */
        coord_t * coord_array = calc_coord(&center, amp);   

        /* Creates array of iterations  */
        int * thunder_array = calc_thunder(coord_array);      

        /* Creates array of colors      */
        color_t * color_array = calc_color(thunder_array);   

        /* Creates image                */
        draw_img(color_array);                           

        printf("Use WASD to move\nE to zoom in\nQ to zoom out\nEsc to exit program\n");

        choice = fgetc(stdin);
        /* determine what it was */
        switch(choice) {
            case 119:   /* w pressed    */
                center.y = center.y + amp/2; 
                break;
            case 115:   /* s pressed    */
                center.y = center.y - amp/2; 
                break;
            case 97:    /* a pressed    */
                center.x = center.x - amp/2;
                break;
            case 100:   /* d pressed    */
                center.x = center.x + amp/2;
                break;
            case 101:   /* e pressed    */
                amp = amp*ZOOM;
                break;
            case 113:   /* q pressed    */
                amp = amp/ZOOM;
                break;
            case 27:    /* Esc pressed  */
                return (EXIT);
                break;    
        }
        system("clear");
    }
}