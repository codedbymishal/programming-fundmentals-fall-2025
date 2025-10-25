#include <stdio.h>
int main() 
{
   int num;
   printf("\n\t\t\t\t\t\tCheck Number!\n");
   printf("Enter a number : ");
   scanf("%d",&num);

   if(num>0)
   {
     printf("Positive number");
   }
   else if(num<0)
   {
   printf("negative number");
   }
   else
   {
    printf("Zero");
   }
    return 0;
}
