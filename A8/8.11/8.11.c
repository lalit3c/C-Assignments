/*
CH-230-A
a8_p11.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	int i = 0;
	char input[n][50]; /*to store input string of file name */
	char buffer[64];

	
	/*scan the name of files */
	for (i = 0; i < n; i++)
	{
		scanf("%s",input[i]);
	}

	FILE *out;
	out = fopen("output.txt", "a");
	
	if (out == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	


	printf("Concating the conent of %d files...\n", n);
	printf("The result is:\n");


	for (i = 0; i < n; i++)
	{

		FILE *in;
		in = fopen(input[i], "r");

		if (in == NULL)
		{
			printf("Cannot open file!\n");
			exit(1);
		}


		while (1)
		{
			int x = fread(buffer, 1, 64, in);

			if(feof(in))
			{
				fwrite(buffer, x, 1, out);
				putc('\n', out);   /*a new line at the end of each file */
				printf("%s\n", buffer);
				fclose(in);
				break;
			}
			else
			{
				fwrite(buffer, 1, x, out);
				printf("%s", buffer);
			}
			
			
		}


	}
	
	fclose(out);
	
	
	fprintf(stdout,"%s", "The result was written into output.txt\n");




	return 0;

}