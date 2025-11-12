#include<stdio.h>
int main()
{
	int arr[5]={5,2,1,9,3};
	int i,j,temp;
	printf("\n\t\t\t\t\t\tBubble Sort!\n\n");
	printf("Original Array: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<5-1;i++)// n-1 passes for n elements
	{
		for(j=0;j<5-i-1;j++)//compares with next element
		{
			if(arr[j]>arr[j+1])// swap if out of order
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n\nSorted Array: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}

