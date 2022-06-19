/*
CH-230-A
a5_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char one[100];              /*array to store first string */
    char two[100];              /*array to store second string */

    fgets(one, sizeof(one), stdin);
    one[strlen(one) - 1] = '\0';        /* removes '\n' character */
    int size_one = strlen(one);

    fgets(two, sizeof(two), stdin);
    two[strlen(two) - 1] = '\0';        /* removes '\n' character */
    int size_two = strlen(two);

    char *merge = (char *) malloc(sizeof(char) * (size_one + size_two));
                            /* allocate memery for concatenated string */
    if(!merge)
    {
        exit(1);            /* if malloc fails */
    }

    strcpy(merge, one);     /* copy string 'one' to string merge */
    strcat(merge, two);     /* concatenate 'two' to 'merge' */

    printf("Result of concatenation: %s\n", merge);
   
    free(merge);         /*deallocation of memory */

    return 0;
    
}