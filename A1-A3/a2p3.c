/*
CH-230-A
a2_p3.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char input [8];
    int weeks, days, hours, total_hours;

    printf ("Enter the number of weeks: ");
    fgets(input, sizeof(input), stdin);
    sscanf (input, "%d", &weeks);

    printf ("Enter the number of days: ");
    fgets(input, sizeof(input), stdin);
    sscanf (input, "%d", &days);

    printf ("Enter the number of hours: ");
    fgets(input, sizeof(input), stdin);
    sscanf (input, "%d", &hours);

    total_hours = weeks*7*24 + days*24 + hours;
    printf ("Total number of hours = %d\n", total_hours);

    return 0;



}