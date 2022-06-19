/*
CH-230-A
a3_p9.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n)   
            /*to calculte sum of elements at position 2 and 5 in array*/
{
    if (n <= 5)     /* error message for invalid input*/
    {    
        printf("One or both positions are invalid\n");
        return -111; 
    }

    double sum = v[2] + v[5]; 
    printf ("sum=%lf\n", sum);
    return sum;
}

int main()
{
    char input [12];
    int n,i;
    double v[20];
   

    fgets (input, sizeof(input), stdin);
    sscanf (input, "%d", &n);

    for (i = 0; i < n && i < 20; i++)
            /*loop until the last element or at max 20 elements*/
    {
        fgets (input, sizeof(input), stdin);
        sscanf (input, "%lf", &v[i]);    /* fill in the ith element of array*/
    }

      sum25(v, n);    /*calls sum25 function with array v and int n as inputs*/
    
    return 0;





}