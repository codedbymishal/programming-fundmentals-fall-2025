#include <stdio.h>
int main() 
{
    int A[2][2], B[2][2], C[2][2] = {0};
    int i,j,k;
    printf("\n\t\t\t\t\tMatrix Multiplication known size!\n\n");
    
    printf("Enter elements for Matrix A (2x2):\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements for Matrix B (2x2):\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            C[i][j] = 0;
            for (k = 0; k < 2; k++) 
			{
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("Resultant Matrix (A x B):\n");
    for (i= 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

