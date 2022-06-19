/*
CH-230-A
a6_p8.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include <stdlib.h>

struct list             /*declare struct list with integer and struct pointer*/
{
    int value;
    struct list* next;
};

struct list* push_front(struct list* my_list, int value)
                            /* adds 'value' as the first element of my_list */
{   
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    (*newel).value = value; 
    (*newel).next = my_list;        /* connects newel to the existing list*/
    return newel;
}

struct list* push_back(struct list* my_list, int value)
                            /* adds 'value' as the last element of my_list */
{
    struct list *cursor , *newel;
    cursor = my_list;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->value = value;
    newel->next = NULL;     /* the last element of link points to null */

    if (my_list == NULL)
    return newel;

    while (cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    cursor->next = newel;   /* connects existing list with newel */
    return my_list;
}

struct list* remove_first(struct list *my_list)
                            /* removes first element from my_list */
{
    if (my_list == NULL)
    return my_list;
    
    struct list *newlist; 
    newlist = my_list->next; /*newlist starts with second element of my_list*/
    my_list = NULL;

    return newlist;  
}

void print_list(struct list* my_list)
                                    /*Print the values stored in my_list */
{
    struct list *p;
    for(p = my_list; p; p = p->next) /*iterate through chains in list */
    {
        printf("%d ", p->value);
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
    char c;
    struct list* my_list = NULL;        /* declare an empty list */

    while (1)
    {
        scanf("%c", &c);

        switch (c)   /* comparing c with input and calling related functions*/
        {
            case 'a':
            {
                int n;
                scanf("%d", &n);
                my_list = push_back(my_list, n);
                break;
            }

            case 'b':
            {
                int n;
                scanf("%d", &n);
                my_list = push_front(my_list, n);
                break;
            }

            case 'r':
            {
                my_list = remove_first(my_list);
                break;
            }

            case 'p':
            {
                print_list(my_list);
                break;
            }

            case 'q':
            {
                dispose_list(my_list);
                exit(1);
                break;
            }
        }
    }

    return 0;
}