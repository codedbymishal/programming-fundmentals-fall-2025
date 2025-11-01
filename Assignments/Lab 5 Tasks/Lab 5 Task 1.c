#include<stdio.h>
int main()
{
	int day;
	printf("\t\t\t\t\tDays of the week using swtich case!\n\n");
	printf("enter the number of day 1-7:\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1: printf("The days is Monday!");break;
		case 2:printf("The day is Tuesday!");break;
		case 3:printf("The day is Wednesday!");break;
		case 4:printf("The day is Thursday!");break;
		case 5:printf("The day is Friday!");break;
		case 6:printf("The day is Saturday!");break;
		case 7:printf("The day is Sunday!");break;
		default:printf("Error! wrong input");break;
	}
	return 0;
			
}
