#include <stdio.h>

// Function 1: take input of two numbers
void getNumbers(int *a, int *b) //permenant modification bec we passed by ref (pointers) not by value
{
    printf("Enter first number: ");
    scanf("%d", a);
    printf("Enter second number: ");
    scanf("%d", b);
}

// Function 2: return sum of two numbers
int sum(int x, int y) 
{
    return x + y;
}

int main() 
{
    int num1, num2;
    printf("\n\t\t\t\tReturn Sum of 2 Numbers Using Functions & Pointers!\n\n");
    getNumbers(&num1, &num2); // sends the address of variables to take input
    int result = sum(num1, num2); // calculate sum

    printf("Sum = %d\n", result);

    return 0;
}

