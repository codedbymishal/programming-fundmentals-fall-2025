#include <stdio.h>

int main() 
{
	
    int rows, cols;
    printf("\n\t\t\t\t\tMaximum element of Matrix\n\n");
	printf("Enter number of rows and cols: \n");
    scanf("%d%d", &rows,&cols);
    int i, j,max;
    int matrix[rows][cols];     
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
			printf("Enter element[%d][%d] of matrix:\n",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    max = matrix[0][0];
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
    }

    printf("\nMaximum element in the matrix is: %d\n", max);

    return 0;
}

