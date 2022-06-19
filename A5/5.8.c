/*
CH-230-A
a5_p8.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

void read_matrix(int **A, int m, int n)    
                         /* to read elements of matrix A of size m x n */
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);  /* strore elements in matrix form */
        }
    }
}

void print_matrix(int **A, int m, int n) 
                /* to print the elements of A in matrix form of size m x n */
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");       /* new line after each row */
    }
}

void matrix_prod(int **A, int **B, int**C, int m, int n, int p)
    /* multiply matrix A(m x n) and B(n x p) and store in matrix C(m x p) */
{
    int i,j,k;
    
    for ( i = 0; i < m; i++)        /*iteratres through 'rows' of A and C */
    {
        for ( j = 0; j < p; j++)    /* iternates through columns of B and C */
        {
            int sum = 0;  
                    /* set sum = 0 before calculation of every element of C */
            for ( k = 0; k < n; k++) /* iterates through col(A) and rows(B) */
            {
                sum += A[i][k] * B[k][j]; /* formula for i,j th element of C */
            }
            C[i][j] = sum;  
        }  
    }

}

int main()
{

    int i, m, n, p;
    scanf("%d", &m);    /* m = no. of row (A) and row(C) */
    scanf("%d", &n);    /* n = no. of col (A) and row(B) */
     scanf("%d", &p);   /* p = no. of col (B) and col(C) */


    int **A = (int **) malloc (sizeof(int*) * m);
                                /* allocate memory for matrix A (m x n) */
    if(!A)  
    {    
        exit(1);        /* if malloc fails */
    }

    for (i = 0; i < m; i++)
    {
        A[i] = (int*) malloc(sizeof(int) * n);
        if(!A[i])  
        {    
            exit(1);        /* if malloc fails */
        }
    }

    int **B = (int **) malloc (sizeof(int*) * n);
                                /* allocate memory for matrix B (n x p) */
    if(!B)  
    {    
        exit(1);        /* if malloc fails */
    }

    for (i = 0; i < n; i++)
    {
        B[i] = (int*) malloc(sizeof(int) * p);
        if(!B[i])  
        {    
            exit(1);        /* if malloc fails */
        }
    }

    int **C = (int **) malloc (sizeof(int*) * m);
                                /* allocate memory for matrix C (m x p) */
    if(!C)  
    {    
        exit(1);        /* if malloc fails */
    }

    for (i = 0; i < m; i++)
    {
        C[i] = (int*) malloc(sizeof(int) * p);
        if(!C[i])  
        {    
            exit(1);        /* if malloc fails */
        }
    }


    read_matrix(A, m, n);
    read_matrix(B, n, p);
  
    printf("Matrix A:\n");
    print_matrix(A, m, n);

    printf("Matrix B:\n");
    print_matrix(B, n, p);

    
    printf("The multiplication result AxB:\n");
    matrix_prod(A, B, C, m, n, p);  
    print_matrix(C, m, p); /* print the elements of C in matrix form of m x p */


    for (i = 0; i < m; i++)     /* deallocating memory of matrix A */
        free (A[i]);
    free(A);

    for (i = 0; i < n; i++)     /* deallocating memory of matrix B */
        free (B[i]);
    free(B);

    for (i = 0; i < m; i++)     /* deallocating memory of matrix C */
        free (C[i]);
    free(C);

    return 0;

}