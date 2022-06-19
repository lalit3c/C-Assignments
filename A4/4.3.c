/*
CH-230-A
a4_p3.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

float geometric_mean (float arr[], int num) 
        /* to calculate geometric mean of array of 'num' integers */
{
    int i;
    float prod = 1;
    for (i = 0; i < num; i++) /*loops to calculate prod*/
    {
        prod *= arr[i];
    }
    float mean = pow(prod, (float) 1/num);   /* calcluates nth root of prod*/
    
    return mean;

}
float highest_num (float arr[], int num)
                            /* to find the highest element in the array */
{
    int i;
    float max = arr[0];         /*assumes first element to be max*/
    for (i = 0; i < num; i++)   
    {
        if (arr[i] > max)       /*comparing current element to previous max*/
        {    
            max = arr[i];
        }
    }

    return max;
}

float smallest_num (float arr[], int num)
                            /* to find the smallest element in the array */
{
    int i;
    float min = arr[0];         /*assumes first element to be min*/
    for (i = 0; i < num; i++)
    {
        if (arr[i] < min)       /*comparing current element to previous max*/
        {
            min = arr[i];
        }
    }
    
    return min;
}

float summation (float arr[], int num)
{
    int i;
    float sum = 0;
    
    for (i = 0; i < num; i++)   
    {
        sum += arr[i];      /*Add current element to previous sum*/
    }

    return sum;
}    

int main()
{
    char c, input [10];             /*array to read user's input*/
    float values[15];               /* array to store floats */
    int i;

    for (i = 0; i < 15; i++)
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%f", &values[i]);

        if (values[i] < 0) 
        break;              /*stops reading when negative values are entered*/
    }
    
    int num = i;        /*num = number of elements enetered*/

    printf("Enter a character: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%c", &c);

    switch (c) 
        /*reading 'c' and calling corresponding function*/
    {
        case 'm' :
        {
            printf("Geometric mean: %f\n", geometric_mean(values, num));
            break;
        }

        case 'h' :
        {
            printf("Highest number: %f\n", highest_num(values, num));
            break;
        }    

        case 'l' :
        {
            printf("Smallest number: %f\n", smallest_num(values, num));
            break;
        }

        case 's' :
        {
            printf("Sum: %f\n", summation(values, num));
            break;
        }

        default :
        {
            printf("Invalid character input!");
        }
    }
    return 0;
}
