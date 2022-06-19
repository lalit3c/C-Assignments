/*
CH-230-A
a2_p9.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main ()
{
    char input [5];
    char key;

    fgets(input, sizeof(input), stdin);
    sscanf (input, "%c", &key);     /*scans for character in input */

    if (((key >='a') && (key <= 'z')) || ((key >='A') && (key <= 'Z')) )
             /*checks if ASCII of key is between that of a-z or A-Z */
    {
        printf ("%c is a letter\n", key);
    }
     
    else if (key >='0' && key <= '9')  /*checks if ASCII of key is between 0-9 */
    {
        printf ("%c is a digit\n", key);
    }

else                               /* checks if key is neither a letter or a digit */
    {
        printf("%c is some other symbol\n", key);
    }
    
    return 0;


}