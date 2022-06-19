/*
CH-230-A
a4_p10.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb)

        /*to caluclte product, quotient, exponentials and inverse of floats */
{
    *prod = a * b;      /* prod is a pointer to product of a and b */
    *div = a / b;
    *pwr = pow(a, b);
    *invb = (float) 1 / b;
}

int main()
{
    char input[10];                     /* array to store user's input */
    float a, b;
    float prod, div, pwr, invb;

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &a);

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &b);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
             /* passes addresses of prod, div, pwr and invb to function */

    printf("Product a * b = %f\n", prod); 
    printf("Division a / b = %f\n", div);
    printf("Power a^b = %f\n", pwr);
    printf("Inverse 1/b = %f\n", invb);

    return 0;


}