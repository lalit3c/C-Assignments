/*
CH-230-A
a5_p11.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>

int check_prime(int n, int x)
            /* to check if n is prime or not && x = 2 at first iteration */
{   
    if (n == 1)     /* special case to say 1 is not prime */
    {
        return 0;
    }
    
    if (x == n) /* reached if n is not divisible by any numbers less than n */
    {
        return 1;
    }
    
    else if (( n % x) == 0)         /* if n is divisible by any x */
    {
        return 0;
    }
    else 
    {               
        return check_prime(n, x+1); /*calls check_prime by incrasing x by 1 */
    }    
}


int main()
{
    int n;
    int x=2;                 
    scanf("%d", &n);

    if (check_prime(n,x) == 1) /* passes n and x = 2 to recursive function */ 
    {
        printf("%d is prime\n", n);
    }
    else if (check_prime(n, x) == 0)
    {
        printf("%d is not prime\n", n);
    }

    return 0;
}