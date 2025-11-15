#include <stdio.h>

int main() 
{
    int n,i;
    double pi = 0.0;
    double term;
    int sign;
    printf("\n\t\t\t\t\t\tFind the value of Pi!!\n");
    printf("How many terms to calculate? ");
    scanf("%d", &n);
    
    printf("Term\tApproximation of Pi\n");
    for (i = 1; i <= n; i++) 
	{
        sign = (i % 2 == 1) ? 1 : -1;           // alternate signs
        term = 4.0 * sign / (2*i - 1);          // calculate term
        pi =pi+ term;                              // add to sum
        printf("%d\t%.10f\n", i, pi);           // print table
    }

    return 0;
}

