#include <stdio.h>

int main() 
{
    int n, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], visited[n];
    for(i=0; i<n; i++) 
	{
		printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
        visited[i] = 0; //initialise array
    }

    for(i=0; i<n; i++) 
	{
        if(visited[i] == 1) // checks if already counted
		continue; // skips it
        count = 1;
        for(j=i+1; j<n; j++) 
		{
            if(arr[i] == arr[j]) 
			{
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
