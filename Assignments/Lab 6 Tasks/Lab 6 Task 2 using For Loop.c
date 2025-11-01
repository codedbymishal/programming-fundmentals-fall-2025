#include <stdio.h>
int main() 
{
    int term1 =1, term2 =1,sum =0 , next;
    printf("\n\t\t\t\tFibonacci series up to 1000 Using FOR loop!\n\n");
    printf("%d %d ", term1, term2);// print first 2 terms

 
    for (next = term1 + term2; next <=1000; next = term1 + term2) 
	{
        printf("%d ",next); // print next term
        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0) // check if divisible by 3 5 or 7
		{
            sum = sum + next;
        }
        term1 = term2;
        term2 = next;
    }

    printf("\n\nSum of Fibonacci numbers divisible by 3, 5, or 7 = %d\n", sum);
    return 0;
}

