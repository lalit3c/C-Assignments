/*
CH-230-A
a5_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
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
    int i;
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = sizeof(arr) / sizeof(float); /* size = no. of elements in arr */

    printf("Before:\n");
    for (i = 0; i < size; i++)
    {
        printf("%.3f ", arr[i]); /* print the original array */
    }
    printf("\n");       
    
    divby5(arr, size);      /* function call changes the array */

    printf("After:\n");
    for (i = 0; i < size; i++)
    {
        printf("%.3f ", arr[i]); /* print the new array */
    }
    printf("\n");

    return 0;

}

