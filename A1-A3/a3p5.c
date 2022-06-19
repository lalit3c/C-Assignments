/*
CH-230-A
a3_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>

double CtoF (double C)              /*Changes Clesius to Fahrenheit*/
{
    double F;
    F = 9.0/5.0 * C + 32.0;         /* Formula for conversion */
    return F;
}


int main()
{
    char input [10];
    char c;
    double temp[100];
    int n, i = 0, j = 0;
    double sum = 0;

    fgets (input, sizeof(input), stdin);
    sscanf(input, "%c", &c);

    fgets (input, sizeof(input), stdin);
    sscanf(input, "%d", &n);

    
    while (i < n)                           /*loop n times to get n doubles*/
    {
        fgets (input, sizeof(input), stdin);
        sscanf(input, "%lf", &temp[i]);
        i++;
    }

    switch (c)
    {
        case 's':
            for (j = 0; j < n; j++)
            {
                sum += temp[j];  
            }
            printf ("Sum of temperatures = %lf\n", sum);
            break;

        case 'p' :
            {
                for (j = 0; j < n; j++)
                {
                    printf("%lf\n", temp[j]);
                }

            }
            break;


        case 't' :
            {
                for (j = 0; j < n; j++)
                {
                    printf("%lf\n", CtoF(temp[j])); /*calling function CtoF*/
                }
            }
            break;

        default:
        {
            for (j = 0; j < n; j++)
            {
                sum += temp[j];
                
            }
            printf("Average: %lf\n", sum/n);
        }
    
    }

    return 0;

}