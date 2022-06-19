/*
CH-230-A
a4_p12.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void replaceAll(char *str, char c, char e) 
                    /* replaces all c with e in string str */
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        str[i] = e;
    }
}

int main()
{
    char c, e;
    char input[80];     /* array to store user's input string */
    char characters[5]; /* array to store user's input of characters */
    
    char stop[] = {'s', 't', 'o', 'p' '\n'}; 
                            /* stores 'stop' followed by 'enter' into array */

    while (1)
    {

        printf("Enter a string: ");
        fgets(input, sizeof(input), stdin);

        if (strncmp(stop, input, 5) == 0)       /* entered string = 'stop' */
            exit(1);                                /* program ends */

        printf("Enter a character to be replaced: ");
        fgets (characters, sizeof(characters), stdin);
        sscanf(characters, "%c", &c);

        printf("Replace with: ");
        fgets (characters, sizeof(characters), stdin);
        sscanf(characters, "%c", &e);

        printf("Old String: %s",input);
        replaceAll(input, c, e);            /* replaces characters in string */
        printf("New String: %s",input);

    }

    return 0;
}