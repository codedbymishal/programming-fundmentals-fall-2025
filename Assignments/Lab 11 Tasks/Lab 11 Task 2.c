#include <stdio.h>

struct employee 
{
    int id;
    char name[50];
    float salary;
    char department[50];
};

int main() 
{
    struct employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Department: ");
    scanf("%s", e.department);

    printf("\n--- Employee Information ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Department: %s\n", e.department);

    return 0;
}

