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
	int i;
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
		push ((number % 2), test); /* pushes the remainder in stack */
		number = number / 2;
	}

	/*print the stack in reverse order */
	for(i = test->count - 1; i >= 0; i--)
	{
		printf("%d", test->array[i]);
	}	
	printf("\n");

	return 0;
}