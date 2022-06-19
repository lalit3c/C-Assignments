/*
CH-230-A
a3_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

void print_form(int n, int m, char c)
{
    int i, j;

    for (i = 0; i < n; i++ )            /* loops through each row*/
    {
        for (j = 0; j < (m + i); j++)  /*loops through each element in a row*/
    
        {   
            printf("%c", c);
        }
        printf("\n");                 /*prints a new line after each row*/
    }
}



int main()
{
    char input[15];
    int n, m;
    char c;
    
    fgets (input, sizeof(input), stdin);
    sscanf(input, "%d", &n);

    fgets (input, sizeof(input), stdin);
    sscanf(input, "%d", &m);

    fgets (input, sizeof(input), stdin);
    sscanf(input, "%c", &c);

    print_form(n, m, c);                /*calling the print_form fucntion*/

    return 0;

}