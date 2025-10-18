#include <stdio.h>

int main() 
{
    int num1,num2;
    char op;
    printf("\t\t\t\t\tCalculator Using Switch!\n\n");
    printf("Enter num 1: ");
    scanf("%d", &num1);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // always use space before %c to ignore newline
    
    printf("Enter num 2: ");
    scanf("%d", &num2);
    
    switch (op) 
	{
        case '+':
            printf("Result = %d + %d = %d\n", num1, num2, num1 + num2); break;
        
        case '-':
            printf("Result = %d - %d = %d\n", num1, num2, num1 - num2); break;
        
        case '*':
            printf("Result = %d * %d = %d\n", num1, num2, num1 * num2); break;
        
        case '/':
            if (num2 == 0)//denominator is 0
                printf("Error! Division by zero is not allowed!\n");
            else
                printf("Result = %d / %d = %d\n", num1, num2, num1 / num2);
            break;
        
        case '%':
            if (num2 == 0)
                printf("Error! Modulus by zero is not allowed!\n");
            else
                printf("Result = %d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        
        default:
            printf("Invalid operator.\n");
            
    }
    
    return 0;
}

