#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n =5;
    int d = 2,i;  // number of positions to rotate

    int temp[d];  // temporarily store first d elements

    // Step 1: Copy first d elements to temp
    for ( i = 0; i < d; i++) 
	{
        temp[i] = arr[i];
    }

    // Step 2: Shift the remaining elements to the left
    for ( i = d; i < n; i++) 
	{
        arr[i - d] = arr[i];
    }

    // Step 3: Copy the temp elements to the end
    for ( i = 0; i < d; i++) 
	{
        arr[n - d + i] = temp[i];
    }

  
    printf("Rotated array: ");
    for ( i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
