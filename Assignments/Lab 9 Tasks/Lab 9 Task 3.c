#include <stdio.h>
int main() 
{
    int numarr[] = {1, 2, 3, 4, 5};//no need to specify size
    int i,sum =0, size = 5;
    int *ptr = numarr;
    printf("\n\t\t\t\t\tSum of Array Using Pointers!\n\n");

    for(i = 0; i < size; i++) 
	{
        sum = sum + *(ptr + i);
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
