#include <stdio.h>

// Function 1: Input matrix
void inputmatrix(int rows, int cols, int matrix[rows][cols],char name) 
{
	int i,j;
    printf("Enter rows and cols of matrix %c:\n",name);
    for (i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			
			scanf("%d", &matrix[i][j]);
		}		
	}
        
            
}

// Function 2: Check if matrices can be multiplied
int canMultiply(int c1, int r2) // r1xc1=r2xc2
{
    if (c1 == r2)
        return 1; // possible
    else
        return 0; // not possible
}

// Function 3: Multiply matrices
void multiplyMatrix(int r1, int c1, int mat1[r1][c1],
                    int r2, int c2, int mat2[r2][c2],
                    int result[r1][c2]) 
{
	int i,j,k;							
    for ( i = 0; i < r1; i++) 
	{
        for ( j = 0; j < c2; j++) 
		   {
		   	
            result[i][j] = 0;
            for ( k = 0; k < c1; k++) 
			     
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function 4: Print matrix
void printMatrix(int r1, int c2, int matrix[r1][c2]) 
{
	int i,j;
    printf("Matrix:\n");
    for (i = 0; i < r1; i++) 
	{
        for ( j = 0; j < c2; j++)
        {
           printf("%d ", matrix[i][j]);	
		}  
        printf("\n");
    }
}

// Function 5: main
int main() 
{
    int r1, c1, r2, c2;
    printf("\n\t\t\t\tMatrix Multiplication using Functions!!\n\n");
    printf("Enter rows and columns of first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: \n");
    scanf("%d %d", &r2, &c2);

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    inputmatrix(r1, c1, mat1, 'A');
    inputmatrix(r2, c2, mat2, 'B');

    if (canMultiply(c1, r2)) 
	{
        multiplyMatrix(r1, c1, mat1, r2, c2, mat2, result);
        
        printf("Result of matrix multiplication:\n");
        printMatrix(r1, c2, result);
    } 
    
	else 
	{
        printf("Matrices cannot be multiplied (columns of first != rows of second)!\n");
    }

    return 0;
} 
