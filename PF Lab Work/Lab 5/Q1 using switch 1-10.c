#include <stdio.h>

int main() 
{
    int num;
    printf("\n\t\t\t\t\tSwitch Case!\n\n");
    printf("\nEnter a number between 1-10: ");
    scanf("%d", &num);

    switch (num) 
    {
        case 1:
            printf("You entered 1!\n");
            break;
        case 2:
            printf("You entered 2!\n");
            break;
        case 3:
            printf("You entered 3!\n");
            break;
        case 4:
            printf("You entered 4!\n");
            break;
        case 5:
            printf("You entered 5!\n");
            break;
        case 6:
            printf("You entered 6!\n");
            break;
        case 7:
            printf("You entered 7!\n");
            break;
        case 8:
            printf("You entered 8!\n");
            break;
        case 9:
            printf("You entered 9!\n");
            break;
        case 10:
            printf("You entered 10!\n");
            break;
        default://prints when no case matches with num
        //switch uses break statement to prevent fall through!
            printf("Invalid input! Enter a number between 1-10!\n");
    }

    return 0;
}

