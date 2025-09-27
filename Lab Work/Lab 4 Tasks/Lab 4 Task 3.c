#include <stdio.h>
int main()
{
	float actualamount,discount,amountafter, amountsaved;
	printf("\t\t\t\t\t Online Shopping Store!\n\n");
    printf("Enter total cost of shopping: \n");
    scanf("%f", &actualamount);
    
    if (actualamount >= 2000 && actualamount <= 4000)
	{
        discount = 0.20; // Discount will be 20%
    } 
    
	else if (actualamount >= 4001 && actualamount <= 6000)	
	{
        discount = 0.30; // Discount will be 30%
    }
    
	else if (actualamount > 6000)
	{
        discount = 0.50; // Discount will be 50%
    } 
    
	else 
	{
        discount = 0.0; // No discount 
    }
    
    printf("Actual amount: %0.2f\n", actualamount);
    
    amountsaved = actualamount * discount;// amount saved
    printf("Amount saved: %0.2f\n", amountsaved);
    
    amountafter = actualamount - amountsaved;// amount after discount
	printf("Amount after discount: %0.2f\n", amountafter);
	
    return 0;
}

