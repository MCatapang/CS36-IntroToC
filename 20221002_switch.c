/*
    1. Define a char variable.
    2. Ask the user for a char.
    3. Switch on the char.
        - If the char is a voewl, print 'Vowel'
        - If it is the 'y' character, print
            'Sometimes'
        - Otherwise, print 'Consonant'
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input;
    printf("Provide a character: ");
    scanf("%c", &input);
    char modInput = tolower(input);

    switch (modInput)
    {
    case 'a':
        printf("Vowel");
        break;

    case 'e':
        printf("Vowel");
        break;

    case 'i':
        printf("Vowel");
        break;

    case 'o':
        printf("Vowel");
        break;

    case 'u':
        printf("Vowel");
        break;
    
    case 'y':
        printf("Sometimes");
        break;

    default:
        printf("Consonant");
        break;
    }
}