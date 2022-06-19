/*
CH-230-A
a4_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void greatest_two(int str[], int dim)
                            /*to find two highest nummbers in an array*/
{
    int i;
    int max = str[0], second_max = str [1]; 
    /* assume first and second element to be the highest and second highest*/


    for (i = 0; i < dim; i++)               /* iterate through all numbers*/  
    {
        if (str[i] > second_max)            /*compare with second highest*/
        {
            if (str[i] > max)             /*compare with the previous highest*/
            {
                max = str[i];                   
            }

            else  /*if greater than previous second max but smaller than max*/
            {
                second_max = str[i];
            }
        }

    }

    printf("Two greatest numbers are %d and %d\n", max, second_max);
}

int main()
{   
    int n, i;
    scanf("%d", &n); 

    int *numbers;
    numbers = (int*) malloc(sizeof(int) * n);
                                        /*allocate memory for n ints*/

    if (numbers == NULL)
        exit(1);                    /*if malloc fails*/

    for (i = 0; i < n; i++)
    {
        scanf ("%d", &numbers[i]);  /*store numbers into array*/
    }

    greatest_two(numbers, n);

    free(numbers);          /*deallocate memory*/

    return 0;

}