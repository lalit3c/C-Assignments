/*
CH-230-A
a3_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char input [5];
    char ch;
    int n, i;

    fgets (input, sizeof(input), stdin);
    sscanf (input, "%c", &ch);              /* gets a char ch */

    fgets (input, sizeof(input), stdin);
    sscanf (input, "%d", &n);               /* gets an int n */

    for(i = 0; i <= n; i++)         /*iterates n times */
    {
        printf("%c\n", ch-i); 
    }

    return 0;
}