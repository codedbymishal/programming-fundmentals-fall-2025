#include <stdio.h>

struct address 
{
    char street[50];
    char city[50];
    char state[50];
    int zip;
};

struct course 
{
    char cname[50];
    float gpa;
};

struct student 
{
    float cgpa;
    struct course c;
    struct address a;
};

int main() 
{
    struct student s1, s2;

    // ---- Student 1 Input ----
    printf("Enter Student 1 CGPA: ");
    scanf("%f", &s1.cgpa);

    printf("Enter Student 1 Course Name: ");
    scanf("%s", s1.c.cname);

    printf("Enter Student 1 Course GPA: ");
    scanf("%f", &s1.c.gpa);

    // ---- Student 2 Input ----
    printf("\nEnter Student 2 CGPA: ");
    scanf("%f", &s2.cgpa);

    printf("Enter Student 2 Course Name: ");
    scanf("%s", s2.c.cname);

    printf("Enter Student 2 Course GPA: ");
    scanf("%f", &s2.c.gpa);

    // ---- GPA Comparison ----
    printf("\n--- GPA Comparison ---\n");
    if (s1.c.gpa > s2.c.gpa)
        printf("Student 1 has highest GPA in %s\n", s1.c.cname);
    else if (s2.c.gpa > s1.c.gpa)
        printf("Student 2 has highest GPA in %s\n", s2.c.cname);
    else
        printf("Both students have same Course GPA\n");

    // ---- CGPA Comparison ----
    printf("\n--- CGPA Comparison ---\n");
    if (s1.cgpa > s2.cgpa)
        printf("Student 1 has highest CGPA\n");
    else if (s2.cgpa > s1.cgpa)
        printf("Student 2 has highest CGPA\n");
    else
        printf("Both students have same CGPA\n");

    return 0;
}

