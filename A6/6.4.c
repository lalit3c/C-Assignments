/*
CH-230-A
a6_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
//#define INTERMEDIATE             /* declaration of macro */
                        /* defined while compiling using -DINTERMEDITE */

int main()
{
    int i, dim;
    scanf("%d", &dim);

    int vec1[dim], vec2[dim];
    
    for (i = 0; i < dim; i++)
    {
        scanf("%d", &vec1[i]);       /* store elements of vec1 */
    }

    for (i = 0; i < dim; i++)
    {
        scanf("%d", &vec2[i]);          /* store elements of vec2 */
    }

    #if defined (INTERMEDIATE) /*execution depends on conditional compilation*/

    printf("The intermediate product values are:\n");
    for (i = 0; i < dim; i++)
    {
        printf("%d\n", vec1[i]*vec2[i]);
    }

    #endif

        //For calculation of Scalar Product
    int sum = 0;
    for (i = 0; i < dim; i++)
    {
        sum += vec1[i] * vec2[i];
    }
    
    printf("The scalar product is: %d\n", sum);

    return 0;
}
