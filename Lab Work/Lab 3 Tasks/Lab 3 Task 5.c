#include <stdio.h>

int main() 
{
	printf("\t\t\t\t\t\tSimple Interest!\n\n");
    float principal, rate, time, simpleinterest;
    
    printf("Enter principal amount (between Rs.100 to Rs.1,000,000 ): ");
    scanf("%f", &principal);  
    if (principal < 100 || principal > 1000000) 
	{
        printf("Error! Principal Amount must be between Rs.100 to Rs.1,000,000 Rs.\n");
        return 0;//end program
    }


    printf("Enter rate of interest %r (between 5%% to 10%%): ");
    scanf("%f", &rate);
    if (rate < 5 || rate > 10) 
	{
        printf("Error! Rate must be between 5%% and 10%%.\n");
        return 0;//end program
    }

    printf("Enter time period in years (between 1 to 10): ");
    scanf("%f", &time);
    if (time < 1 || time > 10) 
	{
        printf("Error! Time period must be between 1 and 10 years.\n");
        return 0;//end program
    }

    simpleinterest = (principal * rate * time) / 100;//PRT/100
    printf("\nSimple Interest = %.3f Rs\n", simpleinterest);
    return 0;
}

