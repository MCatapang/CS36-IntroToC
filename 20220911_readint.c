/*
    Define an int variable.
    Read an int value from the keyboard into the
        variable.
    Print the variable's value.
*/

#include <stdio.h>

int main() {
    int num;
    printf("What number would you like to enter? ");
    scanf("%d", &num);
    printf("%d", num);
    return 0;
}