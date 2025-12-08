#include <stdio.h>
int main() 
{
    char str[20];
    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin); // or use 20
    str[strcspn(str, "\n")] = '\0';
    int length = 0;
    while(str[length] != '\0') 
	{
        length++;
    }
    printf("Length = %d", length);
    return 0;
}
