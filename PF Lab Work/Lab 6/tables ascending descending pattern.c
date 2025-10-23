#include <stdio.h>

int main() 
{
    int i, j;

    i = 1;  // counter for first table
    j = 10; // counter for second table
    int num1,num2;
    
    printf("Enter first number for table: ");
    scanf("%d",&num1);
    printf("Enter second number for alternate table: ");
    scanf("%d",&num2);
    
    printf("Table of %d and %d (alternate pattern):\n",num1,num2);
    printf("\n\t\t\t\tAlternating ascending & descending tables:\n");

    for(i=1;i<=10;i++) 
    {
        printf("%d x %d = %d\n", num1,i, num1*i); // first table ascending
        printf("%d x %d = %d\n", num2,j, num2*j); // second table descending
        j--;
    }

    return 0;
}


