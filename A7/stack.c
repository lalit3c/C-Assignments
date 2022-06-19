/*
CH-230-A
a7_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include"stack.h"
#include<stdlib.h>

void push (int x, struct stack *s)
			/*pushes x at the to of a */
{
	if (s->count >= 12)
	printf("Stack Overflow\n");

	else
	{
		s->array[s->count] = x;
		s->count = s->count + 1;
		printf ("%d\n", x);
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
		printf("%d\n", s->array[s->count-1]);
		s->count = s->count - 1;
	}
}

void empty (struct stack *s)	/*empties stack s */
{
	printf("Emptying Stack ");
	while(s->count > 0)
	{
		printf("%d ", s->array[s->count - 1]);
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