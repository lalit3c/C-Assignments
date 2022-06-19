/*
CH-230-A
a3_p11.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

void findchar (char in[], char c)   /*to find char c in array in */
{
    int i;
    int p = -1;                         /* initialses p to -1 */
    for (i = 0; i < strlen(in); i++)   /* loop through string 'in' */
    {
        if (in[i] == c)            /* checks for char c at position i */
        {
            p = i;                 /* changes value of p on findinf c */
            printf("position=%d\n",p);
            break;              /* programs ends after first occurance of c*/
        }
       
    }
    if (p == -1)        /* if p is still -1, c was not found during loop */
    {
        printf("The character is not in the string\n");
    }
}


int main()
{
    char input[5];
    char one [100];
    char two [100];
    char c;
    

    fgets (one, sizeof(one), stdin);
    one[strlen(one)-1] = '\0';              /*removes '\n' */
   
    fgets (two, sizeof(two), stdin);
    two[strlen(two)-1] = '\0';              /*removes '\n' */

    fgets (input, sizeof(input), stdin);
    sscanf (input, "%c", &c);

    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));

    int cmp = strcmp(one, two);
             /*comparing strings one and two before concatenating*/
    
    printf("concatenation=%s\n", strcat(one, two));
                        /* concatenates strings one and two */
    
    char three [100];
    strcpy (three, two);    /* copies string two into string three */
    printf("copy=%s\n", three);


    if (cmp > 0) 
    {
        printf("one is larger than two\n");
    }
    else if (cmp < 0)
    {
        printf("one is smaller than two\n");
    }
    else if (cmp == 0)
    {
        printf("one is equal to two\n");
    }
    
    findchar(two, c);   /* calling function finchar to search element */
    
    return 0;

}