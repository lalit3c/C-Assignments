/*
CH-230-A
a7_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include <stdlib.h>

struct list            /*declare struct list with data and struct pointers*/
{
    char data;
    struct list* next;
    struct list* prev;
};


struct list* push_front(struct list* my_list, char data)
                        /* adds 'data' as the first element of my_list */
{   
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
	
    (*newel).data = data; 
    (*newel).next = my_list; 	/*link newel to existing list*/
	(*newel).prev = NULL; 		/* make newel the first element*/

	if(my_list == NULL)
	{
		return newel;
	}
	else
	{
		my_list->prev = newel;
	}

    return newel;
}


 struct list* remove_char(struct list *my_list, char c)
                            /* removes all occurance of c from list */
{
    if (my_list == NULL)
    return my_list;
    
    struct list *p = my_list;
	int count = 0;		/* counts the occurances of deleted character */
    while(p != NULL)
	{
		if (p->data == c && p->prev != NULL)
		{
			if(p->next != NULL)			/* if c is in the middle */
			{
				struct list *temp = p;
				temp->prev->next = p->next;
				p = p->next;
				p->prev = temp->prev;	
				free(temp);
				count++;
			}
			else if (p->next == NULL)	/* if c is the last element */
			{
				p = p->prev;
				p->next = NULL;
				count++;
			}
		}
		else if (p->data == c && p->prev == NULL) /*if c is first element */
		{
			p = p->next;
			my_list = p;
			count++;
		}
		else if (p->data != c)	
		{
			p = p->next;
		}

	}
	if (count == 0)				/*if no c is found */
	{
		printf("The element is not in the list!\n");
	}

	return my_list;
}

    
void print_list(struct list* my_list)
                            /*prints the datas stored in my_list */
{
    struct list *p;
    for(p = my_list; p; p = p->next)
    {
        printf("%c ", p->data);
    }
    printf("\n");
}

void print_back(struct list* my_list)
                            /*Prints the datas stored in my_list in reverse */
{
    struct list *p;
    for(p = my_list; p->next != NULL; p = p->next)
    {
			/*do nothing; move pointer to the last elemet */
    }
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->prev;
    }
    printf("\n");
}



void dispose_list(struct list* my_list)
                                /* deallocate memory stored for my_list */
{
    struct list *nextelem;
    while (my_list != NULL) 
    {
        nextelem = my_list->next; 
        free(my_list);
        my_list = nextelem;
    } 
}


int main()
{
    int input;
    struct list* my_list = NULL;

    while (1)
    {
        scanf("%d", &input);
            /* compares input and calls respective functions */
        switch (input)
        {
            case 1:
            {
                char c;
                getchar();
                scanf("%c", &c);
              
                my_list = push_front(my_list, c);
                break;
            }

            case 2:
            {
                char c;
				getchar();
                scanf("%c", &c);
                my_list = remove_char(my_list, c);
                break;
            }

            case 3:
            {
                print_list(my_list);
                break;
            }

            case 4:
            {
                print_back(my_list);
                break;
            }

            case 5:
            {
                dispose_list(my_list);
                exit(1);
                break;
            }
        }
    }

    return 0;
}