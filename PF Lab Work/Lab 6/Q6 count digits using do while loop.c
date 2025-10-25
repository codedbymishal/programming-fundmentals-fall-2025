#include <stdio.h>
int main( )
{
	printf("\n\t\t\t\t\tCounting digits using do while loop!\n\n");
	int number=0, count =0;
    scanf("%d", &number);
	do//executes atleast once
	{
		number = number/10;
        count = count + 1;		
	}
    while (number != 0);

printf("The number of digits are: %d", count);
return 0;
}
