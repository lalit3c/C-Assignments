/*
CH-230-A
a4_p11.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int count_insensitive(char *str, char c)
                /* to count the occurance of character c in string str */
{
    int i;
    int count = 0;

    for (i = 0; i < strlen(str); i++)
    {
        char upperC = toupper(c);   /* upperC = uppercase C */
        char lowerC = tolower(c);   /* lowerC = lowercase c */

        if (str[i] == lowerC || str[i]== upperC)
        count++;
    }
    return count;
}

int main()
{

    char *str1;
    str1 = (char *) malloc (sizeof(char) * 50);
                            /*allocates memeory for 50 chars */

    fgets(str1, 50, stdin);
    int size = strlen(str1);   /*finds lenghth of entered string */

    char *str2;
    str2 = (char *) malloc (sizeof(char) * size);
                    /* allocates memory for calculated size */

    strcpy(str2, str1); /* copies first string to the second */

    free (str1);       /* deallocates memory of first string */

    printf("The character 'b' occurs %d times\n", count_insensitive(str2, 'b'));
    printf("The character 'H' occurs %d times\n", count_insensitive(str2, 'H'));
    printf("The character '8' occurs %d times\n", count_insensitive(str2, '8'));
    printf("The character 'u' occurs %d times\n", count_insensitive(str2, 'u'));
    printf("The character '$' occurs %d times\n", count_insensitive(str2, '$'));

    return 0;
}