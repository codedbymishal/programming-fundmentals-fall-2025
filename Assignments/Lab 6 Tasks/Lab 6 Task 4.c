#include <stdio.h>
#include <string.h>

int main() 
{
    char username[10], password[10];
    char loginUser[10], loginPass[10];
    int i, hasUpper,hasLower,hasDigit;

    // Registration - Username
    while (1) 
	{
        printf("Enter username (5 letters): ");
        scanf("%s", username);

        if (strlen(username) != 5) 
		{
            printf("Username must be 5 letters. Try again!\n");
            continue;  // skip rest of loop and ask again
        }

        int valid = 1;
        for (i = 0; i < 5; i++) 
		{
            if (!((username[i] >= 'A' && username[i] <= 'Z') || 
                  (username[i] >= 'a' && username[i] <= 'z'))) 
			{
                valid = 0;
                break;
            }
        }

        if (valid==0) 
		{
            printf("Username must contain only letters. Try again!\n");
            continue;
        }
        break; // username is valid, exit loop
    }

    // Registration - Password
    while (1) 
	{
         int hasUpper = 0, hasLower = 0, hasDigit = 0; // reset flags for each try
        printf("Enter password (6 characters with atleast, 1 uppercase, 1 lowercase, 1 digit): ");
        scanf("%s", password);

        if (strlen(password) != 6) 
		{
            printf("Password must be exactly 6 characters. Try again!\n");
            continue;
        }

        for (i = 0; i < 6; i++) 
		{
            if (password[i] >= 'A' && password[i] <= 'Z') hasUpper = 1;
            if (password[i] >= 'a' && password[i] <= 'z') hasLower = 1;
            if (password[i] >= '0' && password[i] <= '9') hasDigit = 1;
        }

        if (hasUpper==0 || hasLower==0 || hasDigit==0) 
		{
            printf("Password must have atleast 1 uppercase, 1 lowercase, 1 digit. Try again!\n");
            continue;
        }
        break; // password is valid, exit loop
    }

    printf("Account Created Successfully!\n\n");

    // Login
    while (1) 
	{
        printf("Login - Enter username: ");
        scanf("%s", loginUser);
        printf("Enter password: ");
        scanf("%s", loginPass);

        if (strcmp(username, loginUser) == 0 && strcmp(password, loginPass) == 0) 
		{
            printf("Welcome %s, you are now logged in!\n", username);
            break;
        } 
		else 
		{
            printf("Incorrect username or password! Try again!\n");
        }
    }

    return 0;
}


