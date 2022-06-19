/*
CH-230-A
a5_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

double scalar_prod (double v[], double w[], int n) 
                     /* to calculate scalar product of vector v and w */
{
    double s_prod = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        s_prod += v[i] * w[i];/*adds the product of corresponding componenets*/
    }
    return s_prod;
}

void smallest_pos (double v[], int n)
            /* to find min component of vector v and its position*/
{
    int i, pos = 0;
    double min = v[0];

    for (i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];       /* detrmines the minimum component */  
            pos = i;        /* position of minimum component */
        }
    }
    printf("The smallest = %lf\n",min);
    printf("Position of smallest = %d\n", pos);
    
}
void largest_pos (double v[], int n)
                /* to find max component of vector v and its positions*/
{
    int i, pos = 0;
    double max = v[0];
    
    for (i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];         /* detrmines the maximum compponent */
            pos = i;            /* position of maximum component */
        }
    }
    printf("The largest = %lf\n", max);  
    printf("Position of largest = %d\n", pos);
}


int main ()
{
    char input[15];     /*array to store user's input */
    int i, n;
    

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &n);

    double v[n], w[n];

    for ( i = 0; i < n; i++)
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%lf", &v[i]);    /* store components of vector v */
    }

    for ( i = 0; i < n; i++)
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%lf", &w[i]);       /* store components of vector w */
    }

    printf("Scalar product=%lf\n", scalar_prod(v, w, n));
                            /* calling scalar_prod function within printf */
    
    /* calling functions to print smallest, largest and thier positions */
    smallest_pos (v, n);
    largest_pos (v, n);
    smallest_pos (w, n);
    largest_pos (w, n);
   
    return 0;

}   