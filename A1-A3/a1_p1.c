/*
CH-230-A
a1_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double result; 
    /* The result of our calculation */
    result = (3.0 + 1.0) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
return 0;
}

/* The result is 0.0000 because of the incompatibility between intput (int) and output (double) data types. */
/* This can be fixed by addition of decimal point after every int in line 13 such that compiler takes the integer values as double. */