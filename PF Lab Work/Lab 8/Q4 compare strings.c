#include <stdio.h>
#include <string.h>
int main() 
{
	char a[] = "apple";
    char b[] = "banana";
    printf("\n\t\t\t\t\t\tusing strcmp!\n");
     printf("String a: %s\n", a);
    printf("String b: %s\n\n", b);
    
    int result = strcmp(a, b);//used to compare two strings alphabetically
    
    if(result == 0)
    {
    	 printf("Strings are equal");   	
	}
    else if(result < 0)
    {
    	 printf("a is smaller than b");    	
	}
    else
    {
    	printf("a is greater than b");  	
	}
	
    return 0; 
}
