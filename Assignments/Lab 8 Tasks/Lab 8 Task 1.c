#include <stdio.h>
#include <string.h>

int main() 
{
    char first[50], last[50], full[100];//declare arrays
    int i;
    printf("\n\t\t\t\t\t\tPrint a String Backwards!\n\n");
    printf("Enter first name: ");
    scanf("%s", first);  
    printf("Enter last name: ");
    scanf("%s", last);
    strcpy(full, first);//copy "first" name into "full" name array
    strcat(full, last);  //concatenate "last" name to "full" name array
    printf("Full name backwards: ");
    int len=strlen(full);//save length of full name in variable for easy use
    
    for (i = len-1; i >= 0; i--) 
	{
        printf("%c", full[i]);//print characters last to first
    }
    printf("\n");
    
    return 0;
}
