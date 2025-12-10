#include <stdio.h>

int main() 
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size], i, j, d;

    // Input elements
    for (i = 0; i < size; i++) 
    {
        printf("Enter element %d= ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original Array:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d  ", arr[i]);
    }

    // Positions to rotate
    printf("\nHow many positions do you want to rotate to the left?: ");
    scanf("%d", &d);

    int temp;

    // Repeat d times
    for (i = 0; i < d; i++) 
    {
        temp = arr[0]; // store first element

        // Shift all elements left by 1
        for (j = 0; j < size - 1; j++) 
        {
            arr[j] = arr[j + 1];
        }

        arr[size - 1] = temp; // put first element at end
    }

    // Print rotated array
    printf("Left rotated array: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
