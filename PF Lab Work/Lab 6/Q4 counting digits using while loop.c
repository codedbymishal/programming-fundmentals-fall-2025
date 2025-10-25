#include <stdio.h>
int main( )
{
	printf("\n\t\t\t\t\tCounting digits in a number!\n\n");
	int number=0, count =0;
    scanf("%d",&number);
    while (number != 0)
    {
    	number = number/10;
        count = count + 1; 	
	}
printf("The number of digits are: %d", count);
return 0;
} 
	


