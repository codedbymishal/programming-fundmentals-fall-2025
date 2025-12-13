#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int start,end,len, pal = 1;

    printf("Enter a string or sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = 0;
    while(str[len] != '\0') 
	{
        len++;
    }
    end=len-1;  

    // check palindrome
    for(start = 0; start < end; start++) 
	{  
        if(str[start] != str[end]) 
		{
            pal = 0;  // not palindrome
            break;
        }
		else  
        end--;  // decrement i inside loop
    }

    if(pal == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}



