#include <stdio.h>
int main( )
{
	
 int var1, var2;
 printf("\n\t\t\t\tFind maximum using nested if-else!\n\n");
 
 printf("Enter var1: ");
 scanf("%d", &var1);
 printf("Enter var2: ");
 scanf("%d",&var2);
 
 if (var1 != var2)//not equal
 {
 	printf("var1 is not equal to var2!\n");
 	{
 		 if (var1 > var2)//nested if else block
 		 {
 		 	 printf("var1 is greater than var2!\n");		 	
		 }
		 else
		 {
		 	 printf("var2 is greater than var1!\n");
		 }
 		
	}
 }
 else
 {
 	printf("var1 is equal to var2!\n");
 }
 return 0;
} 

