#include<stdio.h>
int main()
{
	int i,num;

    printf("Enter a number (press 0 to stop):\n");
    scanf("%d", &num);

    while (num != 0) 
    {
        printf("You entered: %d\n", num);

      
        printf("Enter next number (press 0 to stop): ");
        scanf("%d", &num);
    }

  
	printf("You entered 0! Program stopped!\n");
	return 0;
}



