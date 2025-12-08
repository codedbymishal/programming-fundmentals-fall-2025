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
    struct employee e = {101, "ABC", 55000.50, "HR"};

    printf(" \t\t\t\t\t\tEmployee Information \n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Department: %s\n", e.department);

    return 0;
}
