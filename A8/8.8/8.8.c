/*
CH-230-A
a8_p8.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[50]; 	/* array to store input string from keyboard */
	char one[100] ;		
	char two[100] ;
	printf("Name of first file: ");
	fgets(input, sizeof(input), stdin);
	
	input[strlen(input) - 1] = '\0'; /* ignore '\n' character */

	FILE *first;
	first = fopen(input, "r");
	if (first == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	fgets(one, 100, first);
	fclose(first);


	printf("Name of second file: ");
	fgets(input, sizeof(input), stdin);

	input[strlen(input) - 1] = '\0'; /* ignore '\n' character */

	FILE *second;
	second = fopen(input, "r");
	if (second == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	fgets(two, 100, second);
	fclose(second);


	FILE *out;
	out = fopen("results.txt", "w");
	
	if (out == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}

	fputs(one, out);
	fputs(two, out);
	

	fclose(out);

	return 0;

}