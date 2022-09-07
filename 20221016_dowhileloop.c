/*
    1. Define two integer variables
    2. Ask the user for a value
    3. Inside a do-while loop:
        - Print out the first value
        - Ask for another value
        - Loop again if the second value is
            larger than the first
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Give me a number: ");
    scanf("%d", &num1);

    do
    {
        printf("%d", num1);
        printf("\nGive me another number: ");
        scanf("%d", &num2);
    } while(num2 > num1);
}