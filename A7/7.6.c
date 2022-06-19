/*
CH-230-A
a7_p6.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person 		/*declare a struct type person */
{
    char name[30];
    int age;
};
struct person* list;
int n;
				/*function declaration */
int sort_by_name ( struct person *a,  struct person *b);
void bsort (struct person* list, int n, int func ( struct person *,  struct person *));


void swap( struct person *a,  struct person *b)	/*swaps two elements*/
{
    struct person *temp = (struct person*) malloc (sizeof(struct person));

	if(temp == NULL)
	{
		exit(1);
	}

    strcpy(temp->name, a->name);
    temp->age = a->age;
    strcpy(a->name, b->name);
    a->age = b->age;
    strcpy(b->name,temp->name);
    b->age = temp->age; 

    free(temp);
}

int sort_by_age ( struct person *a,  struct person *b)	
										/*compares age of a and b */
{
    
    if (a->age > b->age)
    {
        //swap (a, b);
        return -1;
    }
    else if (a->age == b->age)
    {
        
        return sort_by_name(a, b);	/* compare by name when ages are equal */
    }
    return 1;
}

int sort_by_name ( struct person *a,  struct person *b)
					/* compares names of a and b */
{
    
    if (strcmp(a->name, b->name) > 0)
    {
        //swap (a, b);
        return -1;
       
    }
    else if (strcmp(a->name,b->name) == 0)
    {
        
        return sort_by_age(a, b);	/* compare by age when names are same */
    }
    return 1;
}

/* bubble sort function */
void bsort (struct person* list, int n, int func ( struct person *,  struct person *))
{
    int i;
    int try;
    do 
    {
        try = 0;
        for (i = 1; i < n; i++)
        {
            
            if (func (&list[i-1], &list[i]) == -1 )
            {
                swap (&list[i-1], &list[i]); 
                try = 1;
            }
        }
        
    } while (try == 1);

    /* print the elements of struct */
    for (i = 0; i < n; i++)
    {
        printf("{%s, %d}; ", list[i].name, list[i].age);
       
    }
	 printf("\n");

}

int main()
{
    int i;
    scanf("%d", &n);

    struct person *list = (struct person *) malloc(sizeof(struct person) * n);
	if(list == NULL)
	{
		exit(1);
	}

	/* store Name and Ages from user's input */
    for (i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", list[i].name);
        printf("Age: ");
        scanf("%d", &list[i].age);
    }

    bsort(list, n, sort_by_name); /* bubble sort by age */
	bsort(list, n, sort_by_age);	/*bubble sort by name */
    return 0;
    
}