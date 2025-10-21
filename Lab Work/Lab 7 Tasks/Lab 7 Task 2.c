
#include<stdio.h>
int main()
{
	int m,n,i,j,T=0;
	printf("Enter the number of rows and cols of matrix: \n");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if (arr[i][j]==0)
			{
				T++;
			}
		}
	}
	if (T>=((m*n)/2))
	{
		printf("The matrix is sparse!");
	}
	else printf("The matrix is NOT sparse!");
	return 0;
}
