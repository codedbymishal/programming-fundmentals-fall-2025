#include <stdio.h>
#include <string.h>

int main() 
{
    char username[10], password[10];
    char loginUser[10], loginPass[10];
    int i, hasUpper=0, hasLower=0, hasDigit=0,loggedin=0;

    // Registration - Username
    do {
        printf("Enter username (5 letters): ");
        scanf("%s", username);
        if (strlen(username) != 5)
            printf("Username must be 5 letters. Try again.\n");
    } while (strlen(username) != 5);

    // Registration - Password
    do {
        printf("Enter password (must have 6 characters with atleast 1 uppercase, 1 lowercase, 1 digit): ");
        scanf("%s", password);

        if (strlen(password) == 6) 
		{
            for (i = 0; i < 6; i++) 
			{
                if (password[i] >= 'A' && password[i] <= 'Z') hasUpper = 1;
                if (password[i] >= 'a' && password[i] <= 'z') hasLower = 1;
                if (password[i] >= '0' && password[i] <= '9') hasDigit = 1;
            }
        }

        if (strlen(password) != 6 || !hasUpper || !hasLower || !hasDigit)
            printf("Invalid password! Try again!\n");

    } while (strlen(password) != 6 || !hasUpper || !hasLower || !hasDigit);

    printf("Account Created Successfully!\n\n");

    // Login
    while(loggedin==0) 
	{
        printf("Login - Enter username: ");
        scanf("%s", loginUser);
        printf("Enter password: ");
        scanf("%s", loginPass);

        if (strcmp(username, loginUser) == 0 && strcmp(password, loginPass) == 0)
            loggedin=1; //exit loop
    } 

    printf("Welcome %s, you are now logged in!\n", username);

    return 0;
}

