#include <stdio.h>

int main() 
{
    float salary, taxrate, taxamount, netsalary;
    printf("\n\t\t\t\t\t\tFind Tax!\n\n");
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter tax rate in %%: ");
    scanf("%f", &taxrate);
    
    taxamount = (salary * taxrate) / 100;//find tax
    netsalary = salary - taxamount;//find salary left after tax

    printf("Original Salary: %0.3f\n", salary);
    printf("Tax rate: %0.3f%%\n", taxrate);
    printf("Tax amount: %0.3f\n", taxamount);
    printf("Salary left after Tax: %0.3f\n", netsalary);

    return 0;
}

