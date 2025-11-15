#include <stdio.h>

void Instructions() 
{
    printf("\nThis program calculates total cost of a house after 5 years.\n");
    printf("\nYou need to provide initial cost, annual fuel cost, and annual tax rate.\n\n");
}

double TotalCost(double initialCost, double fuelCost, double taxRate) 
{
    double totalFuel = fuelCost * 5;
    double totalTax = initialCost * taxRate * 5;
    return initialCost + totalFuel + totalTax;
}

int main() 
{
	
    Instructions();

    double initialCost, fuelCost, taxRate;
    
    printf("Enter initial cost of house: ");
    scanf("%lf", &initialCost);
    printf("Enter annual fuel cost: ");
    scanf("%lf", &fuelCost);
    printf("Enter annual tax rate (in decimal, e.g., 0.05 for 5%%): ");
    scanf("%lf", &taxRate);

    double total = TotalCost(initialCost, fuelCost, taxRate);
    printf("Total cost of house after 5 years: %.2lf\n", total);

    return 0;
}

