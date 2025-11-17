#include<stdio.h>
int sumnatural(int n);
int main()
{
	printf("\n\t\t\t\tSum of first n Natural Numbers 1+2+3...n!\n\n");
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The sum of first %d natural numbers is: %d",n,sumnatural(n));
	return 0;
}
int sumnatural(int n)
{
	if(n==0)
	return 0;
	else
	return n+sumnatural(n-1);
}


