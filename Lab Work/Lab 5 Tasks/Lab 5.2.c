#include <stdio.h>

void displayinstructions() 
{
    printf("Welcome to the Coffee Machine!\n");
    printf("Enter coffee type:\n");
    printf("Enter B or b to order black coffee\n");
    printf("Enter W or w to order white coffee\n\n\n");
    //control passed back to main function
}

float calculatetime(char coffee, int doublesize)// recieves 2 parameters of diff datatype
{
    float totaltime = 0.0;


    if (coffee == 'W' || coffee == 'w') // time details for white coffee
	{
        printf("Adding water -> 15 mins\n");//water
        totaltime = totaltime + 15;
        printf("Adding sugar -> 15 mins\n");//sugar
        totaltime = totaltime + 15;
        printf("Mixing well -> 20 mins\n");//mix mix
        totaltime = totaltime + 20;
        printf("Adding coffee -> 2 mins\n");//add coffee
        totaltime = totaltime + 2;
        printf("Adding milk -> 4 mins\n");//milk
        totaltime = totaltime + 4;
        printf("Mixing well again -> 20 mins\n");//mix mix 
        totaltime = totaltime + 20;
    } 
	else if (coffee == 'B' || coffee == 'b')// time details for black coffee
	{
        printf("Adding water -> 20 mins\n");//water
        totaltime = totaltime + 20;
        printf("Adding sugar -> 20 mins\n");//sugar
        totaltime = totaltime + 20;
        printf("Mixing well -> 25 mins\n");//mix mix
        totaltime = totaltime + 25;
        printf("Adding coffee -> 15 mins\n");//add coffee
        totaltime = totaltime + 15;
        printf("No milk for black coffee!\n");//no milk
        totaltime = totaltime + 0;
        printf("Mixing well again -> 25 mins\n");//mix mix
        totaltime = totaltime + 25;
    }
    
    else 
	{
		printf("Invalid coffee type!\n");
        return 0;//end		
	}

    if (doublesize == 1) 
	{
        totaltime = totaltime * 1.5;//double time
        printf("Double size selected! Increasing total time by 50%%!!\n");
    }
    
    return totaltime;//return to main function
}
  

int main()//main function executes first
{
    char coffee,sizechoice, manualchoice;
    float totaltime;
    printf("\n\t\t\t\t\t\tCoffee Maker!\n\n");

    displayinstructions();//control passed to display function

    printf("Enter your choice: ");//user inputs coffee type
    scanf(" %c", &coffee);
 
    printf("Is the cup size double? (Y/N): ");//user inputs cup size
    scanf(" %c", &sizechoice);

    printf("Is the coffee manual? (Y/N): ");//user inputs if they want manual coffee or not
    scanf(" %c", &manualchoice);

    int doublesize = (sizechoice == 'Y' || sizechoice == 'y') ? 1 : 0;// check cupsize using ternary operator

    printf("\nPreparing your coffee!!Please wait!!\n\n");
    
    totaltime = calculatetime(coffee, doublesize);//control and parameters passed to time function

    printf("\nTotal coffee preparation time: %0.3f mins!\n", totaltime);
    
    printf("\nYour coffee is ready!Enjoy:))\n");

    return 0;
}

