#include<stdio.h>

void printarray(int *arr,int size);
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("Calling Function PrintArray: \n");
	printarray(arr,5);
	return 0;
}
void printarray(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",*(arr+i));
	}
}
