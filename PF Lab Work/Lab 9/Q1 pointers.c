#include <stdio.h>

int main() 
{
    int y = 5; // declare and initialise an integer variable y
    int *yPtr; // declare a pointer yPtr
    yPtr = &y; // pointer stores the address of y
    

    printf("Value of y: %d\n", y); // prints 5
    printf("Address of y: %p\n", &y); // prints address of y
    printf("Value stored in yPtr: %p\n", yPtr); //prints address of y same as &y
    printf("Value pointed by yPtr: %d\n", *yPtr); // prints 5
    return 0;
}

