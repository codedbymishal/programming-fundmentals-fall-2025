#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    int result;
    printf("Student 1, enter your string: ");
    fgets(str1, 100, stdin);//can take spaces too
    str1[strcspn(str1, "\n")] = '\0';

    printf("Student 2, enter your string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';//removes \n and replaces with \0 to mark end of string

    result = strcmp(str1, str2);//compares both strings
    if (result == 0) 
	{
        printf("Both strings are EQUAL.\n");
    }
    else if (result > 0) 
	{
        printf("String 1 is GREATER than String 2.\n");
    }
    else 
	{
        printf("String 2 is GREATER than String 1.\n");
    }
    return 0;
}
