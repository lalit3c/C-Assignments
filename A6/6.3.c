/*
CH-230-A
a6_p3.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#define MIN(A, B)  (A < B) ? (A) : (B) ;
                                    /* returns A if A < B else return B */
#define MAX(A, B)  (A > B) ? (A) : (B) ;
                                    /* returns A if A > B else return B */
#define MID(A, B)  (A + B) /2.0 ;
                                    /* returns the average of A and B */
int main()
{
    int a, b, c, m, n;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    m = MIN(a, b);          /* stores minimum of a and b in m*/
    m = MIN(m, c);          /* stores minimum of previous m and c in m */

    n = MAX(a, b);          /* stores maximum of a and b in m*/
    n = MAX(n, c);      /* stores maximum of previous n and c in n */

    float p = MID(m, n);    /* stores average of minimun and maximum in p */

    printf("The mid-range is: %.6f\n", p);
    return 0;

}

