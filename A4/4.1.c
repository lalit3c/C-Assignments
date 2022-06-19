/*
CH-230-A
a4_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int main()
{
    char input[15];     /*to store inputs from users*/
    float upper_limit, lower_limit, step_size;
    float i;
    
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &lower_limit);

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &upper_limit);

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &step_size);

    for (i = lower_limit; i <= upper_limit; i = i + step_size)
            /* loops through thr rows from lower to upper limits*/
    {
            printf("%f ", i);                 /* i = radius of circle */
            printf ("%f ", i * i * M_PI);     /* area with radius i*/
            printf ("%f", 2 * M_PI * i);      /* perimeter with radius i*/
            printf("\n");                   /*new line after each row */

    }
    return 0;
}