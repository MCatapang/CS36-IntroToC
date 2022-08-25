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
        printf("Between 1 and 10");
    }
}