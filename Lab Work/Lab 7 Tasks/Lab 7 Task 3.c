
#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20];
	char lname[20];
	char fullname[40];
	int i,letters=0;
	
	printf("Enter first name: ");
	scanf("%s",fname);
	printf("Enter last name: ");
	scanf("%s",lname);
	
    strcpy(fullname, fname);   // copy first name into fullname
    strcat(fullname, " ");     // add a space between names
    strcat(fullname, lname);   // concatenate last name
    
     for (i = 0; i < strlen(fullname); i++) 
	 {
        if (fullname[i] != ' ') //dont count if space
		{
            letters++;
        }
    }
    printf("Full name is: %s\n",fullname);
    printf("Number of letters in fullname: %d\n", letters);

	return 0;
}
