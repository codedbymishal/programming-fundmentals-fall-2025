#include <stdio.h>

int main() 
{
    int terms, t1 = 0, t2= 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if(terms <= 0) 
	{
        printf("Enter a positive number of terms.\n");
        return 0;
    }

    printf("Fibonacci Series: ");

    // print first two terms
    if(terms >= 1)
        printf("%d ", t1);
    if(terms >= 2)
        printf("%d ", t2);

    // print remaining terms
    for(i = 3; i <= terms; i++) 
	{
        next = t1+t2;
        printf("%d ", next);
        t1 = t2;
        t2 = next;
    }

    printf("\n");
    return 0;
}
