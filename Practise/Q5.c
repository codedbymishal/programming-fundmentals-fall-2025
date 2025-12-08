#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // remove newline

    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // remove newline

    // Concatenate manually
    for(i = 0; str1[i] != '\0'; i++);
    // i starts at 0, loop goes through str1 until it finds the null character \0 at the end of the string
    // After this loop: i points to the index where we can start adding characters from str2
    
    str1[i] = ' '; //add space bet strings
    i++; // so str2 doesnt overwrite space
    
    for(j = 0; str2[j] != '\0'; j++, i++) 
	{
        str1[i] = str2[j];
    }
    // j starts at 0 (for str2), i continues from where str1 ended, copy each character from str2[j] into str1[i]
    
    str1[i] = '\0'; //marks end of stringo

    printf("Concatenated string: %s\n", str1);

    return 0;
}

