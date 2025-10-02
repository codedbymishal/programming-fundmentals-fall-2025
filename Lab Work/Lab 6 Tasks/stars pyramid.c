#include <stdio.h>
int main() 
{
    int i, j, rows;
    printf("\t\t\t\t\t\tSTARS PYRAMID\n\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);  
    
    for(i = 1; i <= rows; i++)
	{
        
        for(j = i; j < rows; j++)//printing spaces
		{
            printf(" ");
        }

 
        for(j = 1; j <= (2*i - 1); j++)//printing stars
		{
            printf("*");
        }

        printf("\n");//new line after each row
    }
    return 0;
}

