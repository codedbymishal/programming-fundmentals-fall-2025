#include <stdio.h>
void rotateright(int arr[],int size,int k);

int main() 
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int arr[size]; int i,k;
	
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
	scanf("%d",&k);
	rotateright(arr,size,k);
	
	printf("Array rotated right to %d positions:\n",k);
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}

void rotateright(int arr[], int size, int k) 
{
    int i,j;  
    int temp[k];

    // Step 1: store last k elements in temp
    for(i = 0; i < k; i++)
        temp[i] = arr[size - k + i];

    // Step 2: shift the rest of the array to the right
    for(i = size - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Step 3: copy temp elements to the beginning
    for(i = 0; i < k; i++)
        arr[i] = temp[i];
}
