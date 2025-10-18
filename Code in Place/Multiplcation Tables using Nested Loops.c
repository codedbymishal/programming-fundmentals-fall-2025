#include <stdio.h>
int main()
{
    int i = 1,j;  
    printf("\n\t\t\t\t\tTables 1 to 5!\n\n");
    while(i <= 5)//table 
    {
        j = 1;
        printf("\nMultiplication Table of %d:\n", i);
        
        while(j <= 10)//multiplier
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        
        i++;
    }
    return 0;
}

