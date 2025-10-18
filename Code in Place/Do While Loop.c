#include<stdio.h>
int main()
{
	int num,dig,sum=0;
	printf("Enter a number: \n");
	scanf("%d",&num);
	do
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;		
	} 
	while(num!=0);
	
	printf("Sum of digits: %d",sum);
	
	return 0;
}

