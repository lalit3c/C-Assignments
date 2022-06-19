/*
CH-230-A
a1_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int result; 
    /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %i\n", result);
    return 0;
}
/* The program prints random values because it does not find any argument/variable for the placeholder "%i" in line 14 and hence gives garbage value as the output. */
/* This was fixed by specifying the data 'result' as the argument/variable for placeholder "%i" */