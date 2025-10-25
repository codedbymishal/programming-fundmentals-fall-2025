#include <stdio.h>

int main() 
{
	printf("\n\t\t\t\t\t\tSwap Numbers!\n");
    int num1, num2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping:\nnum1 = %d, num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After swapping:\nnum1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
