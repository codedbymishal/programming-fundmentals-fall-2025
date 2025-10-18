#include <stdio.h>
int main() 
{
    int num,i;
    long fac;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) 
	{
        printf("Error! No factorial of negative numbers!\n");
        return 0;  // Exit the program immediately
    }
    
    if ( num == 0 )
    {
    	fac =  1;
	}
	
	else
	{
		for ( i = 1; i <= num; i++)
		{
			fac = fac * i;
		}
		
	}
    printf("Factorial of %d = %ld\n", num, fac);
    return 0;
}

