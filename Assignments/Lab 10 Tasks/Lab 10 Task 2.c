#include <stdio.h>

void AssignPosition(int marks) 
{
    int experience;

    if (marks < 50) {
        printf("You are not selected.\n");
    } 
    else if (marks >= 50 && marks < 60) 
	{
        printf("Selected for Trainee Engineer.\n");
    } 
    else {
        printf("Enter years of experience: ");
        scanf("%d", &experience);

        if (marks >= 70 && experience >= 2) 
		{
            printf("Selected for Associate Developer.\n");
        } 
        else if (marks >= 60 && experience >= 1) 
		{
            printf("Selected for Assistant Developer.\n");
        } 
        else 
		{
            printf("Selected for Trainee Engineer.\n");
        }
    }
}

int main() 
{
    int marks;
    printf("\n\t\t\t\t\t Recruitment Decision!\n");
    printf("Enter test marks: ");
    scanf("%d", &marks);

    AssignPosition(marks);

    return 0;
}

