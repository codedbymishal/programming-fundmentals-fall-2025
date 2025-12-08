#include <stdio.h>

int main() 
{
    int n, i, isprime=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 2) // less than 2 is not prime
	isprime = 0;
    
    for(i=2; i*i <= n; i++) 
	{
        if(n % i == 0) 
		{ 
		   isprime=0;
		   break;
		}
    }
    if(isprime==0)
	printf("%d is not prime\n", n);
    else 
	printf("%d is prime\n", n);

    return 0;
}
