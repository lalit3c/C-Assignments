/*
CH-230-A
a3_p3.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

float convert (int cm)          /* creates a function 'convert' */
    {
        float km;
        km = cm / 100000.0;     /* Actual conversion of input */
        
        return km;
    }

int main ()
{
    char input [20];
    int cm;
    
    
    fgets (input, sizeof(input), stdin);
    sscanf(input, "%d", &cm);

    printf ("Result of conversion: %f\n", convert(cm)); 
                            /* calling function convert within printf */

    return 0;    



}