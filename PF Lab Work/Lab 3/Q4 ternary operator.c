#include<stdio.h>
int main()
{

    float hours;
    float d1=0, d2=0, d3=0, d4=0, d5=0, avgsp;

    printf("Enter number of hours travelled (1-5): ");
    scanf("%f", &hours);

    if (hours >= 1 && hours <= 5) 
	{
        printf("Enter distances that are positive only!\n");

        if (hours >= 1) 
		{
            printf("Hour 1: ");
            scanf("%f", &d1);
            if (d1 < 0) 
			{
			 printf("Invalid distance!\n"); 
			 return 0; 
			}
        }

        if (hours >= 2) 
		{
            printf("Hour 2: ");
            scanf("%f", &d2);
            if (d2 < 0) 
			{
			 printf("Invalid distance!\n"); 
			 return 0; 
			}
        }

        if (hours >= 3) 
		{
            printf("Hour 3: ");
            scanf("%f", &d3);
            if (d3 < 0) 
			{
			 printf("Invalid distance!\n");
			 return 0; 
			}
        }

        if (hours >= 4) 
		{
            printf("Hour 4: ");
            scanf("%f", &d4);
            if (d4 < 0) 
			{
			 printf("Invalid distance!\n");
			 return 0;
		    }
        }

        if (hours == 5) 
		{
            printf("Hour 5: ");
            scanf("%f", &d5);
            if (d5 < 0) 
			{
			 printf("Invalid distance!\n");
			return 0;
			}
        }

        
        avgsp = (hours == 1) ? d1/hours
               : (hours == 2) ? ((d1 + d2) / hours)
               : (hours == 3) ? ((d1 + d2 + d3) / hours)
               : (hours == 4) ? ((d1 + d2 + d3 + d4) / hours)
               : ((d1 + d2 + d3 + d4 + d5) / hours);

        printf("Average speed: %0.3f mph\n", avgsp);
    } 
    else 
	{
        printf("Error! Hours must be between 1-5!\n");
    }

    return 0;
}

