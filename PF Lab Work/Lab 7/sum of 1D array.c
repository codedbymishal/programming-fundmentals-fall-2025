#include <stdio.h>

int main() 
{
    int size, i, sum = 0;
    printf("\n\t\t\t\t\t\tSum of Array Elements\n\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int myarray[size];
    for (i = 0; i < size; i++) 
    {
        printf("Enter element %d: \n",i+1);
        scanf(" %d", &myarray[i]);
        sum = sum + myarray[i]; 
    }
    
    printf("\nYou entered: ");//print elements
    for (i = 0; i < size; i++) 
    {
        printf("%d ", myarray[i]);
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}

