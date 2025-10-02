#include <stdio.h>

int main() 
{
    double gb, bill = 0.0;
    printf("Enter number of GBs used: ");
    scanf("%lf", &gb);

    if (gb > 0) 
	
	{
        if (gb <= 100) 
		{
            bill = gb * 2.0;
        } 
        
        else if (gb <= 200) 
		{
            bill = 100 * 2.0 + (gb - 100) * 1.5;
        } 
        
        else if (gb <= 400) 
		{
            bill = 100 * 2.0 + 100 * 1.5 + (gb - 200) * 1.0;
        } 
        
        else        
		{
            bill = 100 * 2.0 + 100 * 1.5 + 200 * 1.0 + (gb - 400) * 0.5;
        }

        bill = bill + (bill * 0.10);// 10% service tax

        printf("Total bill: Rs %.3lf\n", bill);
    } 
    
    else 
	{
        printf("Invalid Input.\n");
    }

    return 0;
}


