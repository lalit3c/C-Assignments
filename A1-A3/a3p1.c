/*
CH-230-A
a3_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char input [15];
    float x;
    int n, i;

    fgets (input, sizeof(input), stdin);
    sscanf (input, "%f", &x);

    fgets (input, sizeof(input), stdin);
    sscanf (input, "%d", &n);

    while (n<1)                  /* checks for 0 or negative integer input */   
    {
        printf ("Input is invalid, reenter value\n");
        fgets (input, sizeof(input), stdin);
        sscanf (input, "%d", &n);
    }

    for (i = 0; i < n; i++ )        /* iterates printf function n times */
    {
        printf("%f\n", x);
    }

    return 0;

}