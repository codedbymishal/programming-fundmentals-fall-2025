#include <stdio.h>
int main() 
{
    int age;

    printf("\n\t\t\tVoting Eligibility Check using TERNARY OPERATOR!\n\n");
    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    (age >= 18) ? 
        printf("You are eligible to vote!!\n") ://prints if true 
        printf("You are not eligible to vote!!\n");//prints if false
        
    // Ternary operator acts like if-else

    return 0;
}

