/*
    1. Create a function.
        - Return type: char
        - Parameters: int*, int*
    2. Inside the function:
        - Ask for two integers
        - Set the user responses to the int* params
        - Prompt the user for a character
        - Get their response as a single character
        - Return the response from the function
    3. In the `main()` function
        - Define three variables and call your func
        - Print values of your variables
*/

#include <stdio.h>

char myFunc(int*, int*);

int main(void)
{
    int x = 20;
    int y = 30;
    int z = 40;
    int a;
    int b;
    int *p1 = &a;
    int *p2 = &b;
    char myChar;

    myChar = myFunc(p1, p2);

    printf("\n%d\n%d\n%d\n", x, y, z);
    printf("%d\n%d\n", *p1, *p2);
    printf("%c", myChar);
}

char myFunc(int *p1, int *p2)
{
    char inputChar;
    int num1, num2;
    printf("Give me an integer: ");
    scanf("%d", &num1);
    printf("Give me another integer: ");
    scanf("%d", &num2);
    printf("Give me a character: ");
    scanf(" %c", &inputChar);

    *p1 = num1;
    *p2 = num2;

    return inputChar;
}