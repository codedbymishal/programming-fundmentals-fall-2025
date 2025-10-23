#include <stdio.h>

int main() 
{
    char letter;

    printf("Enter a letter: \n");
    scanf(" %c", &letter); // always add space before %c to ignore newline character

    switch (letter) 
    {       
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("You entered a vowel!\n");
            break;

        default:
            printf("You entered a consonant!\n");
    }

    return 0;
}

