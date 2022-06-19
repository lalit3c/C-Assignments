/*
CH-230-A
a1_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
int main ()
{
    int x, y, sum, product, difference, remainder;
    float division;
    x = 17;
    y = 4;
    sum = x + y;
    product = x*y;
    difference = x-y;
    division = (float) x/y;
    remainder = x%y;
    printf ("x=%d\n", x);
    printf ("y=%d\n", y);
    printf ("sum=%d\n", sum);
    printf ("product=%d\n", product);
    printf ("difference=%d\n", difference);
    printf ("division=%f\n", division);
    printf ("remainder of division=%d\n", remainder);
    return 0;
    
}
/* Answers: 
x=17
y=4
sum=21
product=68
difference=13
division=4.250000
remainder of division=1 */