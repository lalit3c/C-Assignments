/*
CH-230-A
a5_p3.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count_lower(char* str)  
                /* to count the no. of lowercase characters in str */
{

    char *ptr = &str[0];
    int count = 0;
    while ( *ptr != '\n')   /* ignore the last 'enter' character */
    {
        if ( islower(*ptr) != 0)
        {
            count++;        /* increase count on finding lowercase char */
        } 
        ptr++;
    }
    return count;
}


int main()
{
    char input[50];     /*array to store user's input */

    while (1)
    {   
        printf("Enter a string: ");
        fgets(input, sizeof(input), stdin);

        if (strcmp(input, "\n") == 0)   /*programs ends on empty string */
            break;

        printf("No. of lowercase characters = %d\n", count_lower(input));
    }
    return 0;
}