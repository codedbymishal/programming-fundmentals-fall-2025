#include <stdio.h>
int main( )
{
 printf("\n\t\t\t\t\tVoting eligibility!\n\n");	
 int age;
 printf("Enter your age: ");
 scanf("%d ",&age);
 
 if(age >=18)
 printf("You are eligible for voting!");//this is connected to if
 else
 printf("You are not eligible for voting!");//this is connected to else
 
 return 0;
} 

