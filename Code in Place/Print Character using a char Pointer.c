#include<stdio.h>
int main()
{
	char character;
	printf("Enter a character: ");
	scanf("%c",&character);
	char *cptr = &character;
	printf("The character is: %c", *cptr);
	return 0;
}
