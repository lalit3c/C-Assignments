/*
CH-230-A
a4_p8.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

int n;

void print_matrix (int matrix[][30], int n)
                            /* to print 2D array into matrix (n x n) form */
{   
    int i, j;

    for (i = 0; i < n; i++)      /* iterates through rows */
    {
        for(j = 0; j < n; j++)      /* iterates through columns in each row */
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");               /* new line after each row */
    }
}

void under_secondary_diagonal (int matrix[][30], int n)
                 /* to print elements under the main diagonal of matrix */
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (j > ((n-1)-i))          /* j =(n-1) represnts last column */
            printf("%d ", matrix[i][j]);
        }
        
    }
    printf("\n");
}



int main ()
{
    char input[15];                 /* array to store user's input */
    int n, i, j;
    int matrix[30][30];
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &n);            /* n = no. of rows and columns */

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            fgets(input, sizeof(input), stdin);
            sscanf(input, "%d", &matrix[i][j]);     /*stores data in 2D array*/
        }
    }

    

    printf("The entered matrix is:\n");
    print_matrix (matrix, n);   

    printf("Under the secondary diagonal:\n");
    under_secondary_diagonal (matrix, n);

    return 0;

}