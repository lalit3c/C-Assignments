/*
CH-230-A
a4_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>


int main()
{
    char input[50];                           /* array to store user's input */
    int i;

    fgets(input, sizeof(input), stdin);

    for(i = 0; i < strlen(input) - 1; i++)
            /* loop until strlen - 1 to ignore '\n' */
    {
        if ((i % 2) == 0)                       /* for even positions */
        {
            printf("%c\n", input[i]);
        }

        else                                    /* for odd positions */
        {
            printf(" %c\n", input[i]);
        }
    }

    return 0;


}
