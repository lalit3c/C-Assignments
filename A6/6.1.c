/*
CH-230-A
a6_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#define SWAP(A, B, T) { T c = A;\
                        A = B; \
                        B = c;\
                      }
 /* swaps values of A and B of type T.
  Assigns intermediate c to A, A to B and then B to c (prev A) */ 
    

int main()
{
    int int1, int2;
    double double1, double2;

    /* scanning data from user input */
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%lf", &double1);
    scanf("%lf", &double2);

    SWAP(int1, int2, int);  /* Macro swaps the position */
    SWAP(double1, double2, double);

    printf("After swapping:\n");
    printf("%d\n%d\n", int1, int2); /* printing swapped values */
    printf("%.6lf\n%.6lf\n", double1, double2);

    return 0;

}