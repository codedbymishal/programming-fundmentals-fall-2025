#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], reverse[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);
    i=0;
    len = strlen(str);
    for(j=len-1; j>=0; j--) //reverse string in new var
	{
        reverse[i] = str[j];
        i++;
    }
    reverse[i] = '\0';

    if(strcmp(str, reverse) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

