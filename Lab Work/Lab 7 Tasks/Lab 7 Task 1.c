#include <stdio.h>

int main() 
{
    int num,i;
    float sum = 0, count=0,avg;
    printf("\n\t\t\t\tSum of Positive Numbers in Array!\n\n");
    printf("Enter how many numbers you want to input: ");
    scanf("%d", &num);

    int arr[num];  // array declaration
  
    for (i = 0; i < num;i++)
	{
		printf("Enter number %d:\n", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num;i++)
	{
        if (arr[i] > 0) //adding and counting only positive numbers
		{
			sum = sum + arr[i];
		    count++;
        }
    }
   
    if (count > 0)
        avg = sum / count;// find avg of positive numbers only
    else
        avg = 0;

    printf("\nSum of positive numbers =%0.3f",sum);
    printf("\nAverage of positive numbers = %0.3f", avg);

    return 0;
}

