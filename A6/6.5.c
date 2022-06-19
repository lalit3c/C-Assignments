/*
CH-230-A
a6_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned char c;
    int i, n;

    scanf("%c", &c);

    printf("The decimal representation is: %d\n", c);
                    /* explicitly printing char as %d prints its ASCII code */
    
    n = (int) log2(c);
                /* n = no. of bits requires to represent c in binary */
    
    printf("The backwards binary representation is: ");

    for (i = 0; i <= n; i++)  /* iterate through each bit of 'c' in reverse */
    {
        if ( (c & (1 << i) ) == (1 << i)) /*compare ith bit of c with '1' */
        {
            printf("1");         /* if the bit present in ith position is 1 */
        }
        else
        {
            printf("0");        /* if the bit present in ith position is 0 */
        }
    }
    printf("\n");

    return 0;

}