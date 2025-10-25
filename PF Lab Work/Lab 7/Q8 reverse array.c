#include <stdio.h>

int main() 
{
    int size, i;
    printf("\n\t\t\t\t\t\tArray in Reverse!\n\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int myarray[size]; 

    for (i = 0; i < size; i++) //take input
    {
    	printf("Enter element %d :\n\n", i);
        scanf("%d", &myarray[i]);
    }
    
    printf("You entered elements: \n");//print original array
    for (i = 0; i < size; i++) 
    {
    	printf("%d ", myarray[i]);
    }
    
    printf("\nReverse array: \n");
    for (i = size - 1; i >= 0; i--)//// print array in reverse
    {
        printf("%d ", myarray[i]);
    }

    printf("\n");

    return 0;
}

