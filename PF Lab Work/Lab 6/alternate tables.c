#include <stdio.h>

int main() 
{
    int i,num1,num2;
    printf("Enter first number for table: ");
    scanf("%d",&num1);
    printf("Enter second number for alternate table: ");
    scanf("%d",&num2);
    printf("Table of %d and %d (alternate pattern):\n",num1,num2);
    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n",num1,i,num1*i);
        printf("%d x %d = %d\n",num2,i,num2*i);
    }

    return 0;
}

