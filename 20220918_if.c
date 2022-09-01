/*
    Define an int variable.
    Prompt the user for a value and
        load that integer.
    If the value is greater than 10
        print 'Large'.
    If the value is less than 0,
        print 'Negative'.
    Otherwise print another message.
*/

#include <stdio.h>

int main(void) {
    int my_num;
    printf("Please enter a number: ");
    scanf("%d", &my_num);
    if(my_num > 10) {
        printf("Large");
    } else if (my_num < 0) {
        printf("Negative");
    } else {
        printf("A value from 0 to 10");
    }
}