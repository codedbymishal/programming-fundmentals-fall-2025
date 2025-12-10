#include <stdio.h>

int main() 
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int arr[size]; int i,j,d;
	
	for(i=0;i<size;i++)
	{
		printf("Enter element %d= ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Original Array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\nHow many positions do ypu want to rotate to the right?: ");
	scanf("%d",&d);
    int  temp;

    // Repeat d times
    for (i = 0; i < d; i++) 
	{
        temp = arr[size - 1]; // store last element
        // Shift all elements right by 1
        for (j = size - 1; j > 0; j--) 
		{
            arr[j] = arr[j - 1];
        }
        arr[0] = temp; // put last element at first
    }

    // Print result
    printf("Right rotated array: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
