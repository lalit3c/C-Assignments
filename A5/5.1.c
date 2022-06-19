/*
CH-230-A
a5_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>


void print_triangle(int n, char ch)
                /* a recursive function to print a traingle of char ch*/
{
    int i;
    if (n <= 0)
    {
        exit(1);        /* condition for termination of recursive function */
    }

    for(i = n; i > 0; i--)  
    {
        printf("%c", ch);   /* prints char ch 'n' times */
    }
    printf("\n");               /* go to next line */
    print_triangle(n-1, ch);    /* calls recursive function with n-1 char */

}

int main()
{
    char input [10];        /*array to store user's input */
    int n;
    char ch;

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &n);

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%c", &ch);

    print_triangle(n, ch);  /* calls recursive function */

    return 0;

}