#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j;

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // remove newline

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // remove newline

    // Find end of first string using while
    while (str1[i] != '\0') 
	{
        i++;
    }
    str1[i]=' ';
    i++;
    // Append second string using for loop, increment i inside
    for (j = 0; str2[j] != '\0'; j++) 
	{
        str1[i] = str2[j];
        i++;  // increment i inside loop body
    }
    str1[i] = '\0';  // terminate concatenated string

    printf("Concatenated string: %s\n", str1);
    return 0;
}


