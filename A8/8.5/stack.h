/*
CH-230-A
a8_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

/* declaration of struct type*/
//unsigned int count;
struct stack
{
	unsigned int count;
	char array [30][30];
};


/*list of functions*/
void push (char x[30], struct stack *s);
void pop (struct stack *s);
void empty (struct stack *s);
int isempty(struct stack *s);
void Palindrome(struct stack *s);


