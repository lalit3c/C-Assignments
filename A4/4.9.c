/*
CH-230-A
a4_p9.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int prodminmax(int arr[], int n) 
                /* to calculate product of min and max numbers of array */
{
    int i;
    int max = arr[0];               /* assume first element to be max */
    int min = arr[0];               /* assume first element to be min */

    for (i = 0; i < n; i++)         
    {
        if (arr[i] > max)               /* to determine max element */
        {
            max = arr[i];
        }

        else if (arr[i] < min)          /* to determine min element */
        {
            min = arr[i];
        }
    }
    int prod = max * min;
    return prod;
}


int main()
{
    char input[15];             /* array to store user's input */
    int n, i;

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &n);

    int *arr;
    arr = (int *) malloc (sizeof(int) * n); /* allocate memoery for n ints */

    if ( arr == NULL)
        exit(1);                             /* if malloc fails */
   
    for(i = 0; i < n; i++)
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d", &arr[i]);       /* store data into array */
    }

    int prod = prodminmax(arr, n);
    printf("Product of largest and smallest element is: %d\n", prod);

    free (arr);                         /* deallocate memeory */ 
}