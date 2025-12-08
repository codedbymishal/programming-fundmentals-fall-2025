#include <stdio.h>

int main() 
{
    int n, t1=0, t2=1, next, i;
    printf("Enter terms for Fibonacci Series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(i=1; i<=n; i++) 
	{
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
    return 0;
}
