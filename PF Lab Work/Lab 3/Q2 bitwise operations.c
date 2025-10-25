#include <stdio.h>
int main() 
{
    int a = 5, b = 3;
    printf("\n\t\t\t\t\t\tBitwise Operators!\n");
    printf("AND = %d\n", a & b);
    printf("OR = %d\n", a | b);
    printf("XOR = %d\n", a ^ b);

    printf("Left shift (a << 1) = %d\n", a << 1);//shifts bits of a to the left by 1
    printf("Right shift (b >> 1) = %d\n", b >> 1);//shifts bits of b to the right by 1
  
    return 0;
}

