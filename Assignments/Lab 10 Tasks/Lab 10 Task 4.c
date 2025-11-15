#include <stdio.h>
#include <math.h>

// Function to round number to 2 decimal places
double roundTwoDecimals(double num) 
{
    return round(num * 100) / 100.0;
}

int main() 
{
    double number;
    printf("Enter a positive number: ");
    scanf("%lf", &number);

    double rounded = roundTwoDecimals(number);

    printf("Rounded number: %.2lf\n", rounded);

    return 0;
}

