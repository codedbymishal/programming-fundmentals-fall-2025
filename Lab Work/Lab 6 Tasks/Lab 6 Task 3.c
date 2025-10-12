#include <stdio.h>

int main() 
{
    int num, i, orgnum, sum = 0, dig;
    int isprime = 1;
    printf("\n\t\t\t\tPrime or Palindrome!\n\n");
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) 
	{
        printf("Error! Please enter a 5 digit number.\n");
    }
    else
    {
    	orgnum = num;
        while (num > 0)
        {
        	 dig = num % 10;//extract last digit
             sum = sum + dig;//calculate sum
             num = num / 10;// remove last digit from number    
        }

    printf("Sum of digits = %d\n", sum);
    
    num = orgnum;

    if (sum % 2 == 0)//if sum is even it will check if number is prime
	{    
        if (num < 2) // 0 and 1 are not prime
		{
            isprime = 0;
        } 
		else 
		{
            for ( i = 2; i*i <= num; i++) 
			{
                if (num % i == 0)// if divisible then not prime
				{
                    isprime = 0;
                    break;
                }
            }
        }
        
        if (isprime)// if true
		{
            printf("%d is a prime number!\n", num);
        } 
		else 
		{
            printf("%d is not a prime number!\n", num);
        }
    } 
    
	else// if sum is odd it will check if number is palindrome
	{
        int reversenum = 0;
        while (num > 0) 
		{
            dig = num % 10;//extract last digit
            reversenum = reversenum * 10 + dig;// reverse number logic
            num = num / 10;
        }

        if (reversenum == orgnum) 
		{
            printf("%d is a palindrome!\n", orgnum);
        } 
		else 
		{
            printf("%d is not a palindrome!\n", orgnum);
        }
    }    
    return 0;
	}
}

