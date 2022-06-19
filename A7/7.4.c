/*
CH-230-A
a7_p4.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void print_string (char* string, void func(char )) 
			/*to print all the characters of string after passing function */
{
    int i = 0;
    while(string[i] != '\0')
    {
        func(string[i]);		/* calling function on each element */
        i++;
    }
}

void upper(char c)		/* prints uppercase char c */
{
    printf("%c", toupper(c));
}

void lower(char c)		/* prints lowercase char c */
{
    printf("%c", tolower(c));
}


void swap(char c)	/* swaps upper and lowercase characters and prints */
{
    if (isupper(c) != 0)
    {
        printf("%c", tolower(c));
    }
    else if (islower(c) != 0)
    
    {
        printf("%c", toupper(c));
    }
    else
    {
        printf("%c", c);
    }
}

void quit (char c)		
{
    exit (1);
}

void (*func_array[4]) (char) = {upper, lower, swap, quit};
									/* defining a function pointer array */

int main()
{
    int n;
    char input[50];
    fgets(input, sizeof(input), stdin);
    while (1)
    {
        scanf("%d", &n);
        print_string(input, func_array[n-1]); 
								/* calling function based on input n */
    }
    return 0;
}