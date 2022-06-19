/*
CH-230-A
a5_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
#include<stdlib.h>
void divby5(float arr[], int size)  
            /* to divide each element of array by 5 */
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr[i] /= 5;        /*divide each element by 5 and store the result */
    }
}

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
        sscanf(input, "%f", &arr[i]);    /* store floats in array */
    }

    
    printf("Before:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]); /* print the original array */
    }
    printf("\n");       
    
    divby5(arr, n);      /* function call changes the array */

    printf("After:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]); /* print the new array */
    }
    printf("\n");

    free (arr);

    return 0;

}

