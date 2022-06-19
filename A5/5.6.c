/*
CH-230-A
a5_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char input [10];        /*array to store user's input */
    int i, n;               /* n = no. of elements in array */

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &n);

    float *arr = (float *) malloc(sizeof(float) * n);
                        /* alloacate memory for array of n floats */
    if (!arr)
    {
        exit(1);                    /* if malloc fails */
    }

    for (i = 0; i < n; i++)
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%f", &arr[i]);       /*store the floats in array */
    }

    float *p = &arr[0];     /* set a pointer p to first element of array */

    while ((p - arr) <= n)  /* do until the last element of array */
    {

        if (*p < 0)     /* p is the pointer to the negative value */
        {
            break;    /* break out of loop when first negative value appears */
        }
        
        p++;
    }
    int c = p - arr;    /* arr is a pointer to first elemet of array */
    printf("Before the first negative value: %d elements\n", c );

    free(arr);          /* deallocation of memory */

    return 0;
}
