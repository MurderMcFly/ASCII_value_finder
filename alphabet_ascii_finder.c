//      A program that displays the ascii code of whatever letter you type into it.

#include <stdio.h>

char user_input;

int main( void )
{
    printf("\n\t\tEnter a letter to see its ascii code number\n\n\t\t\t\t");
    scanf("%c", &user_input);

    printf("\t\tThank you");

    printf("\n\n\t\t\t\t%d", user_input);

    return 0
    ;
}
