#include<stdio.h> 
int main( )
{
	int avg, sum = 0; 
    int i, marks[5];
	printf("\n\t\t\t\t\tStudent Marks Array!\n\n");  
    for(i = 0; i<5; i++)
	{
		printf("Enter marks for student [%d]: ",i+1); 
        scanf("%d", &marks[i]);		
	} 
    for(i = 0; i<5; i++)
	{
		sum = sum + marks[i]; 		
	}
	avg = sum / 5; 
	
   printf("Average marks: %d\n", avg); 
   printf("Total marks: %d\n", sum); 
   return 0;	
}
