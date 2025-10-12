#include <stdio.h>
int main() 
{
    int num,i;
    long fac=1;
    printf("\t\t\t\t\t\tFactorial!\n\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) 
	{
        printf("Error! No factorial of negative numbers!\n");
        return 0;  // Exit program immediately
    }
    
	for ( i = 1; i <= num; i++)
	{
		fac = fac * i;
	}
	
    printf("Factorial of %d = %ld\n", num, fac);
    return 0;
}

