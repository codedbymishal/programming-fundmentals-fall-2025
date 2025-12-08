#include <stdio.h>

struct phone 
{
    int area;
    int exchange;
    int number;
};

int main() 
{
    struct phone my = {212, 767, 8900};
    struct phone your;

    printf("Enter area code: ");
    scanf("%d", &your.area);

    printf("Enter exchange: ");
    scanf("%d", &your.exchange);

    printf("Enter number: ");
    scanf("%d", &your.number);

    printf("\nMy number is (%d) %d-%d\n", my.area, my.exchange, my.number);
    printf("Your number is (%d) %d-%d\n", your.area, your.exchange, your.number);

    return 0;
}

