#include <stdio.h>
int main()
{
    int  i, j,num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Pairs whose sum is even:\n");

    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= num; j++)
        {
            if((i + j) % 2 == 0)//checks if sum is even
            {
                printf("(%d,%d) ", i, j);
            }
        }
    }

    return 0;
}

