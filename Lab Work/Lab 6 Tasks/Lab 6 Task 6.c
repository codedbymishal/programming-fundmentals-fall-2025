#include <stdio.h>

int main() {
    int rows, i, j, k;
    printf("\n\t\t\t\t\tDiamond Pattern!\n\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
	{
        for (j = i; j < rows; j++) 
		{
            printf(" ");
        }
        for (k = 1; k <= i; k++) 
		{
            printf("* ");
        }
        printf("\n");
    }


    for (i = rows - 1; i >= 1; i--) 
	{
        for (j = rows; j > i; j--) 
		{
            printf(" ");
        }
        for (k = 1; k <= i; k++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} 
