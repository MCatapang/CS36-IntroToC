/*
    1. Create a function that returns an int
        and takes an int parameter.
    2. Inside the function:
        - Create an integer variable
        - Print "Guess the number"
        - Load the user's guess into your variable
        - If the user's guess is < parameter, return -1
        - If the user's guess is > parameter, return 1
        - If the guess is the same, return 0
*/

#include <stdio.h>

int numberGuesser(int);

int main(void)
{
    int actualVal = 1231;
    printf("%d", numberGuesser(actualVal));
}

int numberGuesser(int actualVal)
{
    int chosenVal, outputVal;
    printf("Guess the number ");
    scanf("%d", &chosenVal);

    if(chosenVal < actualVal)
    {
        outputVal = -1;
    }
    else if (chosenVal > actualVal)
    {
        outputVal = 1;
    }
    else
    {
        outputVal = 0;
    }

    return outputVal;
}