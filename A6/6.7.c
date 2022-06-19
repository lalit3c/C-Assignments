/*
CH-230-A
a6_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

int set3bits(unsigned char c, int m, int n, int p)
                /*sets bits at m, n, pth position of c to 1 */
{
    int mask = pow(2, m) + pow(2, n) + pow(2, p);
                            /* mask has 1 at m,n,p th position */
    int set = c | mask;     
    return set;
}

int main()
{
    unsigned char c;
    int i, m, n, p, res;

    scanf("%c", &c);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);

    printf("The decimal representation is: %d\n", c);
                     /* explicitly printing char as %d prints its ASCII code */
    
    printf("The binary representation is: ");

    /* print the binary representation of c*/
    for (i = 7; i >= 0; i--)            /* iterate through each bit of 'c' */
    {
        if ( (c & (1 << i) ) == (1 << i))
        {
            printf("1");            
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    res = set3bits(c, m, n, p);
    printf("After setting the bits: ");
    /* print binary representation of res i.e. after setting 3 bits */
    for (i = 7; i >= 0; i--)
    {
        if ( (res & (1 << i) ) == (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");


    return 0;
}