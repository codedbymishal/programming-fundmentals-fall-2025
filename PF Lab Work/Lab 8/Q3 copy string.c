#include <stdio.h>
#include <string.h>
int main() 
{
	char original[] = "Hello";
    char copy[20];
    printf("\n\t\t\t\t\t\tusing strcpy!\n\n");
    strcpy(copy, original);
    printf("Original String: %s\n",original);
    printf("Copied String: %s", copy);
    return 0;
}

