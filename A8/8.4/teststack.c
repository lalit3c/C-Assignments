/*
CH-230-A
a7_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include"stack.h"
#include<stdlib.h>


int main()
{
	struct stack *test = (struct stack*) malloc(sizeof(struct stack));

	if(test == NULL)
	{
		exit(1);
	}

	test->count = 0;	/*set count = 0 */
		
		unsigned int number;
		scanf("%d", &number);
		printf("Te binary representation of %d is ", number);

		while (number != 0)
		{
			push ((number % 2), test);
			number = number / 2;
		}
		for(i = 0; i < test->count; i++)
		{
			ptintf("%d", test->array[i]);
		}	
		printf("\n");

	return 0;
}