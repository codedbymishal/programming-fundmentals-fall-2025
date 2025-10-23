#include <stdio.h>

int main() 
{
    int id,pw;
    printf("\n\t\t\t\t\tLogIn with nested switch!\n\n");

    printf("Enter your ID (1/2/3): ");
    scanf("%d", &id);

    switch (id) 
    {
        case 1:
            printf("Enter password for ID 1: ");
            scanf("%d", &pw);
            switch (pw) 
            {
                case 001:
                    printf("Logged in successfully!\n");
                    break;
                default:
                    printf("Incorrect password!\n");
            }
            break;

        case 2:
            printf("Enter password for ID 2: ");
            scanf("%d", &pw);
            switch (pw) 
            {
                case 002:
                    printf("Logged in successfully!\n");
                    break;
                default:
                    printf("Incorrect password!\n");
            }
            break;

        case 3:
            printf("Enter password for ID 3: ");
            scanf("%d", &pw);
            switch (pw) 
            {
                case 003:
                    printf("Logged in successfully!\n");
                    break;
                default:
                    printf("Incorrect password!\n");
            }
            break;

        default:
            printf("Error! Invalid ID!\n");
    }

    return 0;
}

