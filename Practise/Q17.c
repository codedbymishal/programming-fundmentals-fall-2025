#include <stdio.h>

// Function to read matrix
void inputmatrix(int rows, int cols, int matrix[rows][cols]) 
{
    int i, j;
    printf("Enter elements of matrix:\n");
    for(i=0; i<rows; i++)
    {
    	for(j=0; j<cols; j++)
    	{
    		scanf("%d", &matrix[i][j]);
		}
	}          
}

// Function to compute transpose
void transposematrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows]) 
{
    int i, j;
    for(i=0; i<rows; i++)
    {
    	for(j=0; j<cols; j++)
    	{
    		transpose[j][i] = matrix[i][j];
		}
	}           
}

// Function to print matrix
void printmatrix(int rows, int cols, int matrix[rows][cols]) 
{
    int i, j;
    for(i=0; i<rows; i++) 
	{
        for(j=0; j<cols; j++)
        {
        	printf("%d ", matrix[i][j]);
		}       
        printf("\n");
    }
}

int main() 
{
    int rows, cols;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];       // automatic size using variable-length array (VLA)
    int transpose[cols][rows];    // transpose size

    inputmatrix(rows, cols, matrix);
    transposematrix(rows, cols, matrix, transpose);
    
    printf("Original matrix:\n");
    printmatrix(rows, cols, matrix);
    
    printf("Transpose of the matrix:\n");
    printmatrix(cols, rows, transpose);

    return 0;
}
