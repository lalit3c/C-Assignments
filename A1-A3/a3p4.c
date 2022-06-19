/*
CH-230-A
a3_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c)
{
    int idx;
   
    for (idx = 0; str[idx] != '\0'; idx++)  /* Loop until end of string */
    {
        if (str[idx]== c)                   /*finds char c in loop*/
        {  
            return idx;                     /*returns the position of char c*/
        }
    }
    return -1;                              /*if char c is not in string */
}

int main()
{
    char line[80];
    while (1) 
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
    }

    return 0;
}
