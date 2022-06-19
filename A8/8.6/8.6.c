/*
CH-230-A
a8_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in, *out;

	/* open input and output files in respective modes & check malloc error */
	in = fopen("chars.txt", "r"); 
	out = fopen("codesum.txt", "w");
	if (in == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	if (out == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}


	int i, sum = 0;
	for(i = 0; i < 2; i++)
	{
		char c = getc(in); /*reads char from input file */
		sum += c;
	}
	fprintf(out, "%d", sum); 	/*prints sum in file pointed by *out */
	fclose(in);
	fclose(out);

	return 0;
}