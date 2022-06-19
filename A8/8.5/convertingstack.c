/*
CH-230-A
a8_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include"stack.h"
#include<stdlib.h>
#include<string.h>

int main()
{
	char word[30];
	char input[200];
	int i;
	struct stack *test = (struct stack*) malloc(sizeof(struct stack));
	test->count = 0;
	if(test == NULL)
	{
		printf("Error!\n");
		exit(1);
	}

	while (1)
	{
		fgets(input, sizeof(input), stdin);
		int j = 0;

		if (strcmp(input, "exit\n")==0)
		{
			exit(1);
		}

		for (i = 0; i < strlen(input); i++)
		{
			if (input[i] != ' ' && input[i] != '\n')
			{
				word[j] = input[i];
				j++;
			}
			else 
			{
				word[j] = '\0';
				push(word, test);
				//printf("%s..", word);
				j = 0;
			}

		}


		Palindrome(test);
		j = 0;
		printf("\n");
	}
	

	return 0;
}