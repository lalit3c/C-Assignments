/*
CH-230-A
a1_p3.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
int main() {
    float result; /* The result of the division */
    float a = 5.0;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}

/*The variable 'b' of data type int was given decimal values. This was fixed by changing the data type of 'b' to 'float' */
/*The specifier used for varibale 'result' of data type float was  that of int('%d'). This was fixed by replacing it with '%f' in line 14)*/ 