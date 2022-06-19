/*
CH-230-A
a3_p10.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

float product (float a, float b)
                            /*to calculate product of two floats */
{
    float prod = a * b;
    return prod;
}

void productbyref(float a, float b, float *p)
{
    float *ptr_a = &a;      /* pointer to float a*/
    float *ptr_b = &b;      /*pointer to float b*/
    *p = *ptr_a * *ptr_b;   /*product using pointers*/
    
}
void modifybyref(float *a, float *b)
{
    *a = *a + 3;            /*adding 3 to a by reference*/
    *b = *b + 11;           /*adding 11 to b by reference*/

}

int main()
{
    char input [10];
    float a,b,p; 
    
    
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%f", &a); 
    
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%f", &b); 

    printf("Value of a: %f\n", a);
    printf("Value of b: %f\n", b);

    printf ("Product using 'product': %f\n", product (a,b));

    productbyref (a,b, &p);                             /*pass pointer to p*/
    printf ("Product using 'Productbyref' %f\n", p);


    modifybyref (&a, &b);                         /*pass pointers to a and b*/
    printf("After modifybyref, New value of a: %f\n", a);
    printf("After modifybyref, New value of b: %f\n", b);


    return 0;




}
