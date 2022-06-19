/*
CH-230-A
a6_p9.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include <stdlib.h>

struct list            /*declare struct list with integer and struct pointer*/
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
    (*newel).next = my_list; 
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
    newel->next = NULL;

    if (my_list == NULL)
    return newel;

    while (cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    cursor->next = newel;
    return my_list;
}

struct list* remove_first(struct list *my_list)
                            /* removes first element from my_list */
{
    if (my_list == NULL)

    return my_list;
    
    struct list *newlist;
    
    newlist = my_list->next; 
    free(my_list);

    return newlist;
    
}

void print_list(struct list* my_list)
                            /*Print the values stored in my_list */
{
    struct list *p;
    for(p = my_list; p; p = p->next)
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

struct list* insert(struct list *my_list, int pos, int n)
                                /* inserts 'n' at pos position of my_list */
{
    if ((pos < 0) || (my_list[pos-1].next == NULL))
    {
        printf("Invalid position!\n");
        return my_list;
    }
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->value = n;
    newel->next = my_list[pos - 1].next;/*links newel to next element of list*/
    my_list[pos - 1].next = newel; /*links the previous elements to newel */
    
    return my_list;
}

struct list* reverse(struct list *my_list)
                                    /* to reverse the elements of my_list */
{
    
    struct list *cursor, *reversed, *temp;
    cursor = my_list;
    reversed = NULL;
    temp = NULL;
    
    while(cursor != NULL)
    {
        temp  = cursor->next;
        cursor->next = reversed;
        reversed = cursor;
        cursor = temp;
    }
    
    return reversed;
}


int main()
{
    char c;
    struct list* my_list = NULL;

    while (1)
    {
        scanf("%c", &c);
            /* compares c with input char and calls respective functions */
        switch (c)
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

            case 'i':
            {
                int pos, value;
                scanf("%d", &pos);
                scanf("%d", &value);

                my_list = insert(my_list, pos, value);
                break;
               
            }

            case 'R':
            {
                
                my_list = reverse(my_list);
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