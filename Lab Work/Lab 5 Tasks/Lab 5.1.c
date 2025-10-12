#include <stdio.h>
int main() 
{
    char choice;
    printf("\n\t\t\t\t\tProgram Print or Delete?\n\n");
    printf("Are you sure to delete [Y/y] / [N/n] ? ");
    scanf(" %c", &choice); //always use space before %c 

    switch (choice) 
	{
        case 'Y':
        case 'y':
            printf("Deleted Successfully!\n");
            break;

        case 'N':
        case 'n':
            printf("Delete Cancelled!\n");
            break;

        default:
            printf("Error!Choose the right option!\n");
            break;
    }

    return 0;
}

