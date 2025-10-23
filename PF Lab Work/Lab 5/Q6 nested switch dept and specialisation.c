#include<stdio.h>
int main()
{
	int dept,subdept;
	printf("\t\t\t\t Choose department and specialisation using switch case!\n\n\n");
	printf("Enter your department! 1 for CSIT, 2 for EE: \n");
	scanf("%d",&dept);
	switch(dept)
	{
	    case 1: 
	    printf("Your are in the CSIT department!\n");
		printf("Choose your specialsation:\n");
		printf("Enter 1 for Computer Science\n");
		printf("Enter 2 for Artifical Intelligence\n");
		printf("Enter 3 for Data Science\n");
		printf("Enter 4 for Cyber Security\n");
		printf("Enter your choice: ");
		scanf("%d",&subdept);
		switch(subdept)
		{
			case 1: printf("Your chosen specialisation is Computer Science!");break;
			case 2: printf("Your chosen specialisationis AI!");break;
			case 3: printf("Your chosen specialisation is Data Science!");break;
			case 4: printf("Your chosen specialisation is Cyber Security!");break;
			default: printf("Error! Invalid CSIT specialisation");
		}
		break;
	    case 2:
	    printf("You are in the EE department!\n");
		printf("Choose your specialisation:\n");
		printf("Enter 1 for Power Electronics  \n");
		printf("Enter 2 for Radio Systems\n");
		printf("Enter 3 for Integrated Circuit Design\n");
		printf("Enter your choice: ");
		scanf("%d",&subdept);
		switch(subdept)
		{
			case 1: printf("Your chosen specialisation is Power Electronics!");break;
			case 2: printf("Your chosen specialisation is Radio Systems!");break;
			case 3: printf("Your chosen specialisation is Integrated Circuit Design!");break;
			default: printf("Error!Invalid EE specialisation");
		}
		break;
		default: printf("Error! Invalid choice");
		
	} 
	return 0;
}
