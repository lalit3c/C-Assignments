/*
CH-230-A
a4_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count_consonants (char str[])
                    /* to count the number of consonants in string str */
{
    int i,j;
    int count = 0; 
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
                            /* an array of upper and lower case vowels */

    for (i = 0; i < strlen(str); i++)   /* loop through string str */
    {   
      
        for (j = 0; j < 10; j++)        /* loop through string vowels */
        {
       
            if ( str[i] == vowels[j])   /* checks if the letter is a vowel*/
            {
                break;                  /*stop comparing with other vowels*/
            }
        }

        if (isupper(str[i]) == 0 && islower(str[i]) == 0)
                                    /* if the character is not an alphabet*/
        {
            continue;               /* go to the next character */
        }

        else  if ( str[i] != vowels[j]) /* if the alphabet is not a vowel*/
        {
            count++;                    /* increase count by 1 */
        }   

    }
    return count;
}



int main()
{
    char input[100];                /*array to store user's input */

    while (input[0] != '\n')        /*loop until empty string is entered */
    {
        fgets(input, sizeof(input), stdin);

        if (input[0] != '\n')       /*ignore the last empty string*/
        {
             printf("Number of consonants=%d\n", count_consonants(input));
        }    
    }
}