#include <stdio.h>

int main() 
{
    int hours;
    float d1, d2, d3, d4, d5;
    float totaldis, averagesp;

    printf("Enter the number of hours the car travelled: ");
    scanf("%d", &hours);

    printf("Enter distance in hour 1: ");
    scanf("%f", &d1);

    printf("Enter distance in hour 2: ");
    scanf("%f", &d2);

    printf("Enter distance in hour 3: ");
    scanf("%f", &d3);

    printf("Enter distance in hour 4: ");
    scanf("%f", &d4);

    printf("Enter distance in hour 5: ");
    scanf("%f", &d5);

    totaldis = d1 + d2 + d3 + d4 + d5;
    averagesp = totaldis / hours;

    printf("\nTotal Distance = %0.2f km\n", totaldis);
    printf("Average Speed = %0.2f km/h\n", averagesp);

    return 0;
}

