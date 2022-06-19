/*
CH-230-A
a8_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[50]; 	/* array to store input string from keyboard */
	double one, two;
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
	fscanf(first, "%lf", &one);
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
	fscanf(second, "%lf", &two);
	fclose(second);


	FILE *out;
	out = fopen("results.txt", "w");
	
	if (out == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}

	double sum = one + two;
	double difference = one - two;
	double product = one * two;
	double division = one / two;
	
	/*print results in output file */
	fprintf(out, "Sum = %lf\n", sum);
	fprintf(out, "Difference = %lf\n", difference);
	fprintf(out, "Product = %lf\n", product);
	fprintf(out, "Division = %lf\n", division);

	fclose(out);

	return 0;

}