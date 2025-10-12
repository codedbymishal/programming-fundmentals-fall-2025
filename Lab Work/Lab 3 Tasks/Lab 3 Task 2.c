#include <stdio.h>

int main() 
{
    float salary, taxrate, tax, salaryaftertax;
    printf("\n\t\t\t\t\tTax Calculation!\n\n");
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter tax rate in percentage: ");
    scanf("%f", &taxrate);


    tax = (taxrate / 100) * salary;
    salaryaftertax = salary - tax;

    printf("Total Salary: %0.3f\n", salary);
    printf("Tax Rate: %0.3f%%\n", taxrate);
    printf("Tax Paid: %0.3f\n", tax);
    printf("Salary after tax: %0.3f\n", salaryaftertax);
    return 0;
}

