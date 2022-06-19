/*
CH-230-A
a2_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char character[2];
    char char_entered;

    
    fgets(character, sizeof(character), stdin);
    sscanf(character, "%c", &char_entered);

    printf("character=%c\n", char_entered );
    printf("decimal=%d\n", char_entered );
    printf("octal=%o\n", char_entered );
    printf("hexadecimal=%x\n", char_entered );

    return 0;


}