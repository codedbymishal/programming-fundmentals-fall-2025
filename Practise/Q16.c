#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int arr[], int n, int freq[])
{
	int i;
    for ( i = 0; i < n; i++) 
	{
        freq[arr[i] - 1]++;
    }
}

int main() 
{
    srand(time(NULL));
   
    int i,n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);

    int array[n];

    // Storing the Random numbers in array1 and printing
    printf("Numbers: "); 
    for( i = 0; i < n; i++)
	{
        array[i] = (rand() % 10) + 1;  // numbers 1 to 10
        printf("%d ", array[i]);
    }

    int freq[10] = {0};
    CountFrequency(array, n, freq);

    printf("\nNumbers : Frequency\n");
    for( i = 0; i < 10; i++)
	{
        printf("%d appeared : %d times!\n", i + 1, freq[i]);
    }

    return 0;
}
