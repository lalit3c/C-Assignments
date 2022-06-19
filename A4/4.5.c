/*
CH-230-A
a4_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count_consonants (char str[])
                          /* to count the number of consonants in string str */
{
    char *p = str;   /*sets pointer p to array str*/
    int j;
    int count = 0;
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
                            /* an array of upper and lower case vowels */

    while ( *p != '\n')     /*loop through characters in str until \n */
    {   
      
        for (j = 0; j < 10; j++)    /*loop through vowels*/
        {
       
            if ( *p == vowels[j])    
            {
                break;
            }
        }  

        if (isupper(*p) == 0 && islower(*p) == 0) 
        {
                     /* if character is not an alphabet, do nothing*/
        }

        else  if ( *p != vowels[j]) 
        {
            count++;
        }
        
        p++;
    }
    
    return count;
}



int main()
{
    char input[100];              /*array to store user's input*/

    while (input[0] != '\n')      /*loop until empty string is entered */
    {
    
        fgets(input, sizeof(input), stdin);

        if (input[0] != '\n')     /*ignore the last empty string*/
    
        printf("Number of consonants=%d\n", count_consonants(input));
    
    }
}