#include <stdio.h>

int main() 
{
    long num, lastdig, rest,temp;
    
    printf("Enter a number to check divisibility by 7: ");
    scanf("%ld", &num);

    temp = num; // save original number
    while (temp != 0 && temp != 7 && temp != -7) 
	{
        lastdig = temp % 10;// extract last digit
        rest = temp / 10;// remove last digit, save remaining number in rest
        temp = rest - 2 * lastdig;  // subtract double of last digit
    }

    if (temp == 0 || temp == 7 || temp == -7) 
	{
        printf("%ld is divisible by 7\n", num);
    } 
	else 
	{
        printf("%ld is NOT divisible by 7\n", num);
    }

    return 0;
}

