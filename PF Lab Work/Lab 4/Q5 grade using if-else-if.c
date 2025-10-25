#include <stdio.h>

int main() 
{
    int marks;
    printf("\n\t\t\t\t\tFind Grade using if-else-if!\n\n");
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    
    if (marks < 0 || marks > 100) 
	{
        printf("Error! Marks must be between 0 and 100!\n");
    } 
    else if (marks >= 90)
    {
    	printf("Grade: A!\n");    	
	}       
    else if(marks >= 80)	
	{
		printf("Grade: B!\n");
	}        
    else if (marks >= 70)
    {
    	printf("Grade: C!\n");
	}       
    else if (marks >= 60)
    {
    	printf("Grade: D!\n");
	}       
    else
    {
    	printf("Grade: F\n");
	}
	return 0;
}


