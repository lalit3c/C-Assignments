/*
CH-230-A
a6_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

int main()
{
    unsigned char c;
    int i;
    scanf("%c", &c);

    printf("The decimal representation is: %d\n", c);
                /* explicitly printing char as %d prints its ASCII code */
   
    printf("The backwards binary representation is: ");

    for (i = 7; i >= 0; i--)    /* iterate through each bit of 'c' */
    {
        if ( (c & (1 << i) ) == (1 << i)) /*compare each bit of c with '1' */
        {
            printf("1");        /* if the bit present is 1 */
        }
        else
        {
            printf("0");        /* if the bit present is 0 */
        }
    }
    printf("\n");

    return 0;
}