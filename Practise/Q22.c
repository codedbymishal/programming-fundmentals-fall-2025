#include <stdio.h>

int main() 
{
    int n,i,j,temp;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for( i = 0; i < n; i++) 
	{
        for( j = 0; j < n; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe original matrix is:\n");
    for( i = 0; i < n; i++) 
	{
        for( j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
            
        printf("\n");
    }
    for( i = 0; i < n; i++) 
	{
        for( j = i+1; j < n; j++) 
		{
			if (i!=j)
			{
				temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
			}   
        }
    }
    printf("\nThe swapped matrix is:\n");
    for( i = 0; i < n; i++) 
	{
        for( j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
            
        printf("\n");
    }
    
}
