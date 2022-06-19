/*
CH-230-A
a7_p7.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

/* declaration of struct type*/
struct stack
{
	unsigned int count;
	int array [12];
};

/*list of functions*/
void push (int x, struct stack *s);
void pop (struct stack *s);
void empty (struct stack *s);
int isempty(struct stack *s);


