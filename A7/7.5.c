/*
CH-230-A
a7_p5.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


int ascending(const void *va, const void *vb)
			/* orders va and vb in ascending order */
{
    const int* a = (const int*) va;
    const int* b = (const int*) vb;
    
    if (*a < *b)
        return -1;

    else if (*a > *b)
        return 1;

    else 
        return 0;
}

int descending(const void *va, const void *vb)
				/* orders va and vb in descending order */

{
    const int* a = (const int*) va;
    const int* b = (const int*) vb;
    
    if (*a > *b)
        return -1;

    else if (*a < *b)
        return 1;

    else 
        return 0;
}
int (*func[2])(const void *, const void*) = {ascending, descending};
			/* declaring a function pointer with 2 functions */

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        char c;
        scanf("%c", &c);

        if ( c == 'd')
        {
            qsort(arr, n, sizeof(arr[0]), func[1]);	
							/* calls qsort with descending function*/

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else if ( c == 'a')
        {
            qsort(arr, n, sizeof(arr[0]), func[0]);
							/* calls qsort with ascending function*/

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else if (c == 'e')
        {
            exit (1);
        }


    }
    return 0;
}