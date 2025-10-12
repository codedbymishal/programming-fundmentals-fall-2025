#include <stdio.h>

int main() 
{
    int num1, num2, temp;

    printf("\n\t\t\t\t\t\tSwapping Numbers!\n\n");
    printf("Enter num 1: ");
    scanf("%d", &num1);

    printf("Enter num 2: ");
    scanf("%d", &num2);

    printf("\nValues Before swapping:\n");
    printf("Num 1 = %d\n", num1);
    printf("Num 2 = %d\n", num2);


    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nValues After swapping:\n");
    printf("Num 1 = %d\n", num1);
    printf("Num 2 = %d\n", num2);

    return 0;
}

