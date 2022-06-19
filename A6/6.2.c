/*
CH-230-A
a6_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#define LASTBIT(C) (C & 1)
    /* checks the last bit of C and compares it with '1'*/

int main()
{
    unsigned char c, b;
    scanf("%c", &c); /* scans character from standard input */

    b = LASTBIT(c); /* b = last bit of binary representation of c */

    printf("The decimal representation is: %d\n", c);   
                            /* prints decimal representation of c */
    printf("The least significant bit is: %d\n", b);
                            /* prints decimal representation of b */

    return 0;

}