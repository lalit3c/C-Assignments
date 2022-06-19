/*
CH-230-A
a2_p10.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main ()
{
    char input [5];
    int n;

    fgets(input, sizeof(input), stdin); /*gets user's input */
    sscanf (input, "%d", &n);           /*scans for integer in input */

    int i=1;

    while (n<1)                /* checks for 0 or negative integer input */   
    {
        printf("Inavlid Input! Enter a valid positive integer: ");
        fgets(input, sizeof(input), stdin);  
        sscanf (input, "%d", &n);  
    }

    while (i<=n)                            /* To iterate n times */
    {
        printf ("%d days = %d hours\n", i, i*24);
        i++;
    }
    

return 0;
}