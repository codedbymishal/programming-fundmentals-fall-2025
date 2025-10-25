#include<stdio.h>
int main()
{
	int i=1,limit;
	printf("Enter limit to print numbers 1 to limit: ");
	scanf("%d",&limit);
	do
	{
		printf("Number: ");
		printf("%d \n",i);
		i++;		
	}while(i<=limit);
}
