/*
CH-230-A
a7_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include "linked_list.h"  /* links the header file */
#include <stdio.h>
#include <stdlib.h>

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