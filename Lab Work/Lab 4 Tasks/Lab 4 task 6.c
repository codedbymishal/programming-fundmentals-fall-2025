#include<stdio.h>
int main()
{
	int calories,fatgrams;
	float calfrmfat,calfrmfatper;
	printf("\t\t\t\tFind Percentage of Calories From Fat!\n\n");
	
	printf("Enter the number of calories in your food: \n");
	scanf("%d",&calories);
	printf("Enter the number of fat grams in your food: \n");
	scanf("%d",&fatgrams);
	if (calories>=0 && fatgrams>=0)
	{
		calfrmfat = fatgrams * 9;//number of calories from fat
		calfrmfatper =(calfrmfat / calories) * 100;//percentage of calories from fat
		if(calfrmfat<=calories)
		{
			printf("The percentage of calories in your food from fat = %0.2f\n",calfrmfatper);//display percentage
			if(calfrmfatper<30)
			{
				printf("The food is low in fat!\n");
			}
		}
		else
		{
			printf("Wrong input!Fat Calories cant be greater than total number of calories in food!\n");
		}		
	}
	else
	{
		printf("Error! Calories or Fat grams incorrectly entered!\n");
	}
	
	return 0;
}

