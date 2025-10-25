#include <stdio.h>
int main() 
{
    int age;

    printf("\n\t\t\tVoting Eligibility check using DOUBLE TERNARY OPERATORS!\n\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    (age < 0 || age > 100) ? //age range validation
        printf("Error! Age must be between 0 and 100!\n") : 
        (age >= 18 ? //executes if false
            printf("You are eligible to vote!\n") ://prints if true 
            printf("You are not eligible to vote!\n")//prints if false
        );

    return 0;
}

