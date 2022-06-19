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

void push (char x[30], struct stack *s)
			/*pushes x at the top of s */
{
	if (s->count >= 30)
	printf("Stack Overflow\n");

	else
	{
		strcpy(s->array[s->count], x); 
		s->count = s->count + 1;
	}
	
}

void pop (struct stack *s)
		/*pop last element from stack s */
{
	if (isempty(s)==1)		/*check id stack is empty */
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("%s\n", s->array[s->count-1]);
		s->count = s->count - 1;
	}
}

void empty (struct stack *s)	/*empties stack s */
{
	printf("Emptying Stack ");
	while(s->count > 0)
	{
		printf("%s ", s->array[s->count - 1]);
		s->count--;
	}
	printf("\n");
}

int isempty(struct stack *s)	/*checks if stack s is empty */
{
	if (s->count == 0)
		return 1;
	else	
		return -1;
}

void Palindrome(struct stack *s)
{
	int i;
	int count = 0;
		for ( i = 0; i < s->count / 2; i++)
		{
			if(strcmp(s->array[i], s->array[s->count - 1 - i]) == 0)
			{
				

			}
			else
			{
				//printf("%s ", s->array[i]);
				count++;
			}
		}

		if (count == 0)
		{
			printf("The sentence is palindromic by words!");
		}
		else
		{
			printf("The sentence is not palindromic by words!");
		}
}