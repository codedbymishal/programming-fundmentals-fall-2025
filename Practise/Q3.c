#include <stdio.h>
int main() 
{
    char str[] = "Hello";
    char temp;
    int i=0, j=4;
    while(i<j) 
	{
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
    printf("Reversed string: %s", str);
    return 0;
}
