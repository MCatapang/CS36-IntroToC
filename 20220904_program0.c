/*
    1. Write a program that prints out your
        name, the course ID of this class,
        what programming/computer courses 
        you've taken.
    2. Ask the user for two numbers.
    3. Show the:
        - sum of the two numbers
        - the difference (n1-n2)
        - the product
        - the quotient (n1/n2)
*/

#include <stdio.h>

int main(void) {
    char name[] = "Michael Catapang";
    int course_id = 60525;
    char message[] = "My name is %s, I'm in course %d. ";
    printf(message, name, course_id);


    const int arr_size = 3;
    char course_arr[arr_size][100] = {
        {"Intro to Java"},
        {"Intro to Computer Systems"},
        {"Intro to Python"}
    };
    printf("I've taken:");
    for (int i = 0; i < arr_size; i++)
    {
        printf("\n%s", course_arr[i]);
    }


    int num1;
    int num2;
    printf("\nGive me a number: ");
    scanf("%d", &num1);
    printf("Give me a second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    printf("The sum is %d", sum);
    printf("\nThe difference is %d", diff);
    printf("\nThe product is %d", product);
    printf("\nThe quotient is %d", quotient);
}