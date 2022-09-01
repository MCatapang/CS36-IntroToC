/*
    Define a char variable.
    Read a char value from the keyboard
        into the  variable.
    Print the variable's value.
*/

#include <stdio.h>

int main(void) {
    char my_char;
    printf("Enter a character: ");
    scanf("%c", &my_char);
    printf("%c", my_char);
    return 0;
}