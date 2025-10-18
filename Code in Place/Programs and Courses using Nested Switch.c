#include <stdio.h>

int main() 
{
    int program, year;
    printf("\t\t\t\t\tNested Switch for Programs and Courses!\n\n");
    printf("Enter program type:\n");// Ask for program type
    printf("1: Computer Science\n");
    printf("2: Electrical Engineering\n");
    printf("Enter your choice 1/2?: ");
    scanf("%d", &program);

    switch(program) 
	{
        case 1:  // user chose Computer Science
            printf("Enter year of CS:\n");
            printf("1: First Year\n");
            printf("2: Second Year\n");
            printf("Enter your choice 1/2?: ");
            scanf("%d", &year);

            switch(year) //switch for computer science courses
			{
                case 1://CS courses for year 1
                    printf("Computer Science -> First Year Courses:\n");
                    printf("1: Programming Fundamentals\n");
                    printf("2: IT Fundamentals and Applications\n");
                    printf("3: Applied Physics\n");
                    break;
                case 2://CS courses for year 2
                    printf("Computer Science -> Second Year Courses:\n");
                    printf("1: Data Structures\n");
                    printf("2: Linear Algebra\n");
                    printf("3: Database Management Systems\n");
                    break;
                default:
                    printf("Invalid year!\n");//input other than 1 or 2 in year
            }
            break;

        case 2://user chose electrical engneering
            printf("Enter year:\n");
            printf("1: First Year\n");
            printf("2: Second Year\n");
            printf("Enter your choice 1/2?: ");
            scanf("%d", &year);

            switch(year)//switch for electrical engineering courses 
			{
                case 1://EE courses for year 1
                    printf("Electrical Engineering -> First Year Courses:\n");
                    printf("1: Circuit Analysis\n");
                    printf("2: Basic Electronics\n");
                    printf("3: Coordinate Geometry\n");
                    break;
                case 2:// EE courses for year 2
                    printf("Electrical Engineering -> Second Year Courses:\n");
                    printf("1: Electronic Devices and Circuits\n");
                    printf("2: Signals and Systems\n");
                    printf("3: Electromagnetic Fields\n");
                    break;
                default:
                    printf("Invalid year!\n");//input other than 1 or 2 in year
            }
            break;

        default:
            printf("Invalid program type!\n");//input other than 1 or 2 in program
    }

    return 0;
}

