#include<stdio.h>
void printcharacter(char *ptr);

int main()
{
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	printcharacter(&character);
    return 0;
}
void printcharacter(char *ptr)
{

	printf("The character is: %c", *ptr);
}
