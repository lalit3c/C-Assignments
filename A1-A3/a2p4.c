/*
CH-230-A
a2_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
int main()
{

    char input[6];
    float a, b, h;

    
    fgets (input, sizeof(input), stdin); 
    sscanf (input, "%f", &a);               

    
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%f", &b);
    
   
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%f", &h);
    

    float area_square = a * a;      /*area = (lenghth)^2 */
    float area_rectangle = a * b;   /*area = length * width */
    float area_triangle = a * h/2 ; /*area = 1/2*base*height */
    float area_trapezoid = (a+b) * h/2; /*area = 1/2*(sum of bases)*height */

    printf ("square area=%lf\n", area_square);
    printf ("rectangle area=%lf\n", area_rectangle);
    printf ("triangle area=%lf\n", area_triangle);
    printf ("trapezoid area=%lf\n", area_trapezoid);

    return 0;



}