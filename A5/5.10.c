/*
CH-230-A
a5_p10.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
void print_numbers (int n)
            /* recurive function to print numbers lesser than n */
{
    if (n == 1)         /* condition to end recursive function */
    {
        printf("1.");
        printf("\n");
        exit(1);        /* end of program */   
    }

    if (n <= 0)     /* in case the first number entered is 0 or negative */
    {
        printf("0.");
        printf("\n");
        exit(2);
    }
    
    printf("%d, ", n);
    print_numbers(n-1);     /* calling print_numbers function within itself */
   
}

int main()
{
    int n;
    scanf("%d", &n);

    print_numbers(n);   /* calling a recursive function */

    return 0;
}