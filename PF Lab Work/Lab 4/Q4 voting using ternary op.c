#include <stdio.h>

int main() 
{
    int age;

    printf("\n\t\t\tVoting Eligibility Check using TERNARY OPERATOR!\n\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    // Ternary operator acts like if-else
    (age >= 18) ? 
        printf("You are eligible to vote!\n") : 
        printf("You are not eligible to vote.\n");

    return 0;
}

