/*
CH-230-A
a2_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char input[5];
    double x, y;

    printf("Enter the first double: ");
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%lf", &x);
    
    printf("Enter the second double: ");
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%lf", &y);

    double *ptr_one = &x;       /*sets ptr_one to variable x */
    double *ptr_two = &x;       /*sets ptr_two to variable x */
    double *ptr_three = &y;     /*sets ptr_three to variable y */

    printf ("Address contained in ptr_one : %p\n", ptr_one);
    printf ("Address contained in ptr_two : %p\n", ptr_two);
    printf ("Address contained in ptr_three : %p\n", ptr_three);

    return 0;


    /* ptr_one == ptr_two != ptr_three */
}