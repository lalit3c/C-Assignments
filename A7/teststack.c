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
		
		while (1)
		{
			char c;
			scanf("%c", &c);
			switch (c)
			/*calls corresponding functions*/
			{
				case 's':
				{
					int n;
					scanf("%d", &n);
					printf("Pushing ");
					push(n, test);
					break;
				}
				case 'p':
				{
					printf("Popping ");
					pop(test);
					break;
				}
				
				case 'e':
				{
					empty(test);
					break;
				}
				case 'q':
				{
					printf("Quit\n");
					exit(1);
					break;
				}
			}

		}

	return 0;
}