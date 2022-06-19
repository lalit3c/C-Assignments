/*
CH-230-A
a4_p13.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h> 
void uppcase(char *str) 
                             /* to replace lowercase chars by uppercase */
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]) != 0)       /* if character is lowercase */
        str[i] = toupper(str[i]);       /* change it to uppercase */
    }           
                                /* leave other characters unchanged */

}
void lowcase(char *str) 
                             /* to replace uppercase chars by lowercase */
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]) != 0)           /* if character is uppercase */
        str[i] = tolower(str[i]);           /* chage it to lowercase */
    }
                                        /* leave other characters unchanged */
}

int main()
{
    char input[90];                 /* array tp store user's input */
    char stop[] = {'e', 'x', 'i', 't' ,'\n'}; /* array to store 'exit' */

    while (1)
    {
        //printf("Enter a string: ");
         fgets(input, sizeof(input), stdin);

        if (strncmp(stop, input, 5) == 0)   /* entered string = 'exit' */
            exit(1);                        /* program ends */

        
        uppcase(input);                     
        printf("uppcase=%s",input);         /* prints all uppercase */
        
        lowcase(input);
        printf("lowcase=%s",input);         /* prints all lowercase */

    }

    return 0;
}