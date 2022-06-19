/*
CH-230-A
a3_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

float to_pound (int kg, int g)          /* creates a function 'to_pound' */
    {
        float lb;
        lb = (kg + g/1000.0) * 2.2;     /* Actual conversion of input */
        
        return lb;
    }


int main ()
{
    char input [20];
    int kg, g;
    
    fgets (input, sizeof(input), stdin);
    sscanf(input, "%d", &kg);

    fgets (input, sizeof(input), stdin);
    sscanf(input, "%d", &g);
    

    printf ("Result of conversion: %f\n", to_pound(kg, g)); 
                         /* calling function to_pound within printf */

    return 0;    



}