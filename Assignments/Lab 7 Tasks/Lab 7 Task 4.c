#include<stdio.h>
int main()
{

    int n;
    printf("\n\t\t\t\t\tTranspose Matrix!\n\n");
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n], transpose[n][n];
    int i, j;
	int symmetric = 1;//assume matrix is symm
   
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
			printf("Enter element [%d][%d] of matrix:\n",i,j);
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; 
        }
    }

    for (i = 0; i < n; i++) //goes thru each row
	{
        for (j = 0; j < n; j++) //goes thru each col in that row
		{
            if (matrix[i][j] != transpose[i][j])//checks if each element is equal to corresponding element
			{
                symmetric = 0;
                break;// breaks inner loop bec no need to check further elements in this row
            }
        }
        if (!symmetric) break;// breaks outer loop no need to check further rows
    }
    
    printf("\nOriginal matrix: \n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose of matrix:\n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (symmetric)
        printf("\nMatrix is symmetric!\n");
    else
        printf("\nMatrix is asymmetric!\n");

    return 0;
}
