#include <stdio.h>
int main() 
{
	int i,j,k;
	printf("\n\t\t\t\tMatrix Multiplication of known Matrix!\n\n");
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };  

    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int C[2][2] = {0};

    // Matrix multiplication
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            C[i][j] = 0; 
            for (k = 0; k < 3; k++) 
			{
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("Resultant Matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

