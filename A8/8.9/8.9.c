/*
CH-230-A
a8_p9.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char array[8] = {' ', ',', '.', '?', '!', '\t', '\r', '\n'};
		/* an array of all characters that separate words */

/* to check if char ch separates words */
int is_break (char ch)
{
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		if (ch == array[i])
		return 1;
	}
	return 0;
}

int main()
{
	char c, input[50]; 	/* to store input string of file name */

	printf("Name of file: ");
	fgets(input, sizeof(input), stdin);
	
	input[strlen(input) - 1] = '\0';  /*ignores '\n' character */

	FILE *in;
	in = fopen(input, "r");
	if (in == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	
	c = getc(in);
	int count = 0;
	while (c != EOF) /*loop until end of file is reached */
	{
		if (is_break(c)) /* if a separating character is found */
		{
			count++;     
			while(is_break(c)) /*check for consecutive separating char */
			{
				c = getc(in);	
			}
		}
		c = getc(in);
		
	}
	fclose(in);

	printf("The file contains %d words\n", count);

	return 0;
}