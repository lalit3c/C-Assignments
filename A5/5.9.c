/*
CH-230-A
a5_p9.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

void read3Darray(int ***arr, int row, int col, int depth)
                                        /*to read the elements of 3D array */
{
    int i, j, k;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            for ( k = 0; k < depth; k++)
            {
                scanf("%d", &arr[i][j][k]); /* store the elements in array */
            }
        }
    }
}

void print2Dsection(int ***arr, int row, int col, int depth)
                                 /* to print sections parallel to XOY axis */ 
{
    int i, j, k;
    for ( k = 0; k < depth; k++)
    {
        printf("Section %d:\n", k+1);
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < col; j++)
            {
                printf("%d ", arr[i][j][k]); /* prints all (i,j) for given k */
            }
            printf("\n");       /* new line after each column */
        }
    }   
}


int main()
{
    int row, col, depth;
    int i, j;
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &depth);


    int ***table = (int ***) malloc (sizeof(int**) * row);
                    /* allocate memory for 3D array called table */

    if(!table)  
    {    
        exit(1);        /* if malloc fails */
    }

    for(i = 0; i < row; i++)
    {
        table[i] = (int **) malloc(sizeof(int*) * col);
                /* allocate memory for each row having 'col' columns each */
        
        if(!table[i])
        {    
            exit(1);        /* if malloc fails */
        }

        for (j = 0; j < col; j++)
        {
            table [i][j] = (int *) malloc(sizeof(int) * depth);
                /* allocate memory for each column having 'depth' elements  */

            if(!table[i][j])
            {    
                exit(1);        /* if malloc fails */
            }
        }
    }

    read3Darray(table, row, col, depth);
    print2Dsection(table, row, col, depth);  

    for ( i = 0; i < row; i++) /*stepwise deallocation of memory for 3D array*/
    {
        for ( j = 0; j < col; j++)
        {
            free (table[i][j]);
        }
        free(table[i]);
    }
    free(table);

    return 0;

}