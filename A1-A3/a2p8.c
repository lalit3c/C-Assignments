/*
CH-230-A
a2_p8.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char input [10];
    int integer;

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &integer);      /*gets an integer from user's input */

    if (integer%2 == 0 && integer%7 ==0) /*checks if both remainders are 0 */
    {
        printf ("The number is divisible by 2 and 7\n");
    }
    else                                /* if either of reaminders are not 0 */
    {
        printf ("The number is NOT divisible by 2 and 7\n");
    }


    return 0;

}