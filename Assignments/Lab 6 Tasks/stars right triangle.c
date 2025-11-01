#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)//outer loop for rows
	{       
        for(j = 1; j <= i; j++)//inner loop for stars
		{     
            printf("* ");
        }
        printf("\n"); // new line after each row
    }

    return 0;
}

