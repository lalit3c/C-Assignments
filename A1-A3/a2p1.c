/*
CH-230-A
a2_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
int main ()
{
    char line [20];
    double double1, double2;
    int int1; 
    int int2;
    char char1, char2;
    
   
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%lf", &double1);
    
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%lf", &double2);

   
    fgets (line, sizeof(line), stdin);
     sscanf (line, "%d", &int1);
   
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &int2);

    
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%c", &char1);
    
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%c", &char2);


    double sum_double = double1 + double2;
    double difference_double = double1 - double2;
    printf("sum of doubles=%lf\n", sum_double );
    printf("difference of doubles=%lf\n", difference_double );
    double square = double1 * double1;
    printf("square=%lf\n", square );

    int sum_int = int1 + int2;
    int product_int = int1 * int2;
    printf ("sum of integers=%d\n", sum_int);
    printf ("product of integers=%d\n", product_int);

    int sum_char = char1 + char2;
    int product_char = char1 * char2;
    printf ("sum of chars=%d\n", sum_char);
    printf ("product of chars=%d\n", product_char);
    printf ("sum of chars=%c\n", sum_char);
    printf ("product of chars=%c\n", product_char);
    


    return 0; 




}