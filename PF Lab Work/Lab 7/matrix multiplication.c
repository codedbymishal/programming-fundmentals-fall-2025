
#include <stdio.h>
int main() 
{
    int r1, c1, r2, c2, i, j, k;
    printf("\n\t\t\t\t\tMatrix Multiplication!\n\n");
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2)//check order 
    {
        printf("Matrix multiplication not possible!\n");
    } 
    else 
    {
        int a[r1][c1], b[r2][c2], resultant[r1][c2]; // array declaration
        printf("\nEnter elements of matrix 1:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
            	printf("Enter element[%d][%d]: ",i,j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter elements of matrix 2:\n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
            	printf("Enter element[%d][%d]: ",i,j);
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                resultant[i][j] = 0;//initialise to remove garbage values
            }
        }

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                for (k = 0; k < c1; k++) 
                {
                    resultant[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nResultant matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                printf("%d\t", resultant[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

