#include <stdio.h>

int main() 
{
    int items, quantity;
    char choice;
    int i, total = 0;

    printf("\n\t\t\t\t\tWelcome to the University Cafeteria!\n\n");
    printf("FOOD MENU:\n\n");
    printf("B = Burger -> Rs.200\n");
    printf("F = French Fries -> Rs.50\n");
    printf("P = Pizza -> Rs.500\n");
    printf("S = Sandwich -> Rs.150\n");

    printf("How many items do you want to order? (1/2/3/4): ");
    scanf("%d", &items);

    if(items >= 1 && items <= 4)  // ? Valid number of items
    {
        for (i = 1; i <= items; i++) 
        {
            printf("Enter choice B/F/P/S for item %d: ", i);
            scanf(" %c", &choice); // space before %c to ignore newline

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            switch (choice) 
            {
                case 'B':
                case 'b':
                    total = total + quantity * 200;
                    break;
                case 'F':
                case 'f':
                    total = total + quantity * 50;
                    break;
                case 'P':
                case 'p':
                    total = total + quantity * 500;
                    break;
                case 'S':
                case 's':
                    total = total + quantity * 150;
                    break;
                default:
                    printf("Invalid choice! Skipping this item.\n");
                    break;
            }
        }
    }
    else  
    {
        printf("Invalid number of items! Enter 1/2/3/4\n");
        return 0;
    }

    printf("\nTotal bill: Rs.%d\n", total);

    return 0;
}

