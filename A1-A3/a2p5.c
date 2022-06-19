/*
CH-230-A
a2_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    char input [5];
    int a;
    printf("Enter the value of a: ");           /*asks the users for input*/
    fgets (input, sizeof(input), stdin);
    sscanf (input, "%d", &a);          /*gets an integer from user's input*/

    printf("The value of 'a' you entered = %d\n", a);

    int *ptr = &a;                               /* Sets pointer to variable */
    printf ("Address of variable : %p\n", ptr);
    
    *ptr = *ptr +5;                             /* Adds 5 to content of a */
    printf ("The new varibale = %d\n New address of the viarable : %p\n", a, ptr);

    return 0;



}