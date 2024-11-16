/*
                                        Avery Jacobson
                                        csci 1111
                                        James Polzin

Assignment 3:                Given: 01/18/14     Due: 01/23/14
------------                                  Points: 10
Purpose: Do some computations.

Description:

Create a C program that reads in three integer values
representing the height, width and length of a rectangular 
prism/box. Compute the following results using those three 
values:

        Areas:
          - Surface area of the top
          - Surface area of the front face
          - Surface area of an end
          - Surface area of the entire prism
          
        Perimeters:
          - of the bottom
          - of the front face
          - of an end
  
        Volume:
          - of the prism

        Chord:
          - diagonal distance across the prism. That is: the 
            single chord that crosses the prism from  
            left-to-right, top-to-bottom, and front-to-back.

Notes:
-----
- Read the three integer input values in the order they were 
  first mentioned above: height, width, length.
- Print the results in the order listed above.

- Do as much integer math as possible. (Since the inputs are
  integers, almost all the results will also be integers.)
  
- Nicely format and label your output.

- Gradually develop your program in steps:
    - Read in your inputs and print them out to confirm
      you are reading them in correctly
    - Compute just one of the computed values
    - Add additional computations one at a time
    - Ask about any of the math you are not sure of
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // initial hight, width, lenght
    int height, width, length;
    // area top, area face, acrea side, area all
    int areat, areaf, areas, areaa;
    // Perimeter top, Perimeter face, Perimeter side, Perimeter all 
    int perimt, perimf, perims, perima; 
    // Volume of cube
    int volume;
    // magnitude of distance
    float mag;
    
    
    printf("Please enter the hight in meters:\n");

    scanf("%i", &height);
 
    printf("Please enter the width in meters:\n");
    scanf("%i", &width);  
    printf("Please enter the length in meters:\n");
    scanf("%i", &length);
 
    areat = width * length;
    areaf = length * height;
    areas = width * height;
    areaa = (areat+areaf+areas)*2;
    
    perimt = (width*2) + (length*2); 
    perimf = (length*2) + (height*2);
    perims = (width*2) + (height*2);
    perima = (4*width) + (4 * height) + (4*length);
    
    volume = length * width * height;
    
    mag = sqrt( pow(length, 2) + pow(width,2) + pow(height,2));
 
    printf("\narea of the top  is: %15i m^2\n", areat);
    printf("area of the face is: %15i m^2\n", areaf);
    printf("area of the side is: %15i m^2\n", areas);
    printf("area of the entire box is: %9i m^2\n\n", areaa);
 
    printf("Perimeter of the top  is: %10i m\n", perimt);
    printf("Perimeter of the face is: %10i m\n", perimf);
    printf("Perimeter of the side is: %10i m\n", perims);
    printf("Perimeter of the entire box is: %4i m\n", perima);
 
    printf("\nVolume of the box is: %14i m^3\n", volume);
 
    printf("\nDistance from end to end : %9f m", mag);
 
 return 0;

}





