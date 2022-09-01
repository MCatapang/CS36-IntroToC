/*
    Define a float variable.
    Read a float value from the keyboard
        into the variable.
    Print the variable's value.
*/

#include <stdio.h>

int main(void) {
    float my_float;
    printf("Provide a decimal number: ");
    scanf("%f", &my_float);
    printf("%f", my_float);
}