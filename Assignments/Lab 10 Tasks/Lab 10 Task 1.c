#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int arr[], int size) 
{
    int counted[11] = {0}; // to store whether a number is already counted (0-10)
    int i,j;
    for (i = 0; i < size; i++) 
	{
        if (counted[arr[i]] == 0) 
		{
            int count = 0;
            for ( j = 0; j < size; j++) 
			{
                if (arr[j] == arr[i]) count++;
            }
            printf("Value %d occurs %d times\n", arr[i], count);
            counted[arr[i]] = 1; // mark as counted
        }
    }
}

int main() 
{
    int size,i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array1[size];
    srand(time(0));
    for ( i = 0; i < size; i++) 
	{
        array1[i] = rand() % 11; // random number between 0-10
    }

    printf("Array: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array1[i]);
    }
    printf("\n\n");

    CountFrequency(array1, size);

    return 0;
}
