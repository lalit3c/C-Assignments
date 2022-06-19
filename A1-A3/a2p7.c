/*
CH-230-A
a2_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/


#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)          
        {
            printf("i is %d\n", i); 
            i--;                    /*fixing iteration within the loop */
        }       
    printf("That’s it.\n");

    return 0;
}


