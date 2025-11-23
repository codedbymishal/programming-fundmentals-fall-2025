#include <stdio.h>

// Function prototype without parameter name (only datatype)
int add(int, int);

int main() 
{
    int result;
	result = add(5, 10);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int, int) 
{
    return 5 + 10; // Example; normally you would use the parameters
}

