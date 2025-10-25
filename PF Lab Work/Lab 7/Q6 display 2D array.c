#include <stdio.h>

int main() 
{
    int rows, cols, i, j;

    printf("Enter number of rows and cols : \n");
    scanf("%d %d", &rows,&cols);
    int nums[rows][cols];//array declaration
    
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &nums[i][j]);//take input 
        }
    }

    printf("Matrix you entered:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d\t", nums[i][j]);  
        }
        printf("\n"); 
    }

    return 0;
}

