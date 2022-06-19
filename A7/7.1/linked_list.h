/*
CH-230-A
a7_p1.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

struct list             /*declare struct list with integer and struct pointer*/
{
    int value;
    struct list* next;
};

/*list of prototypes of all the functions */
struct list* push_front(struct list* my_list, int value);
struct list* push_back(struct list* my_list, int value);
struct list* remove_first(struct list *my_list);
void print_list(struct list* my_list);
void dispose_list(struct list* my_list);



