#include <stdio.h>
int main() 
{
    char str1[10] = "abc";
    char str2[10] = "abd";
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') 
	{
        if(str1[i] != str2[i]) break;
        i++;
    }
    if(str1[i] == str2[i])
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
