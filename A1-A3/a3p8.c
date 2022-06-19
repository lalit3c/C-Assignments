/*
CH-230-A
a3_p8.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>

float sum = 0;                            /*declaring sum as global variable*/
int i;                                    /*declaring i as global variable*/ 


float summation (float num[])       /* calculates sum of elements in array*/
{
    for (i = 0; num[i] != -99.0 && i < 10; i++) 
        /*loop until finding -99 or end of array*/
    {
        sum += num[i];
    }
      return sum;

}

float average (float num [])       /* calculates average of elements in array*/
{
    float avg = sum/ i;       /* uses 'sum' and 'i' from summation function */
    return avg;
}



int main()
{
    float num[10];
    char input [15];
    float total = 0;
    float avg;

    for (i = 0; i < 10; i++)
    {   
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%f", &num[i]);
    
        if (num[i] == -99.0)        /*ends the program on finding -99.0 */
        break;  
    }

    total = summation(num);     /* calling summation function */
    avg = average(num);         /* calling average function */

    printf("Sum: %f\n Avg: %f\n", total, avg);

    return 0;
}