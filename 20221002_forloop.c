/*
    1. Define an int variable.
    2. Prompt the user for a value to load the variable.
    3. Using a for loop:
        Print 'hello' that many times as well as the iteration.
*/

#include <stdio.h>

int main(void)
{
    int num;
    printf("Give me a number: ");
    scanf("%d", &num);

    char* greeting = "hello";
    for(int i=0; i<num; i++)
    {
        printf("%d. Hello\n", i);
    }
}