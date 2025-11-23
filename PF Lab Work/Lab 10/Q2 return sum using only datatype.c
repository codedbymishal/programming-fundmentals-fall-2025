#include <stdio.h>

int sum(int, int); // function prototype (only types, no parameter names)

int main() 
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

  
    int result = sum(num1, num2); //function call

    printf("The sum is: %d\n", result);
    
    return 0;
}

int sum(int x, int y) // function definition
{
    return x + y;
}

