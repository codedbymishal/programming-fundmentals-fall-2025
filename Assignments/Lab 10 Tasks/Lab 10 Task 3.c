#include <stdio.h>

void volumeCal(int a, int h) 
{
    double volume = (a * a * h) / 3.0;
    printf("Volume of the solid = %.2lf\n", volume);
}

void getData() 
{
    int a, h;
    printf("Enter value of side a: ");
    scanf("%d", &a);
    printf("Enter value of height h: ");
    scanf("%d", &h);

    volumeCal(a, h);
}

int main() 
{
    getData();
    return 0;
}

