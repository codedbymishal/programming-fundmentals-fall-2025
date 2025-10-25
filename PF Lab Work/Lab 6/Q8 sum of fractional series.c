#include<stdio.h>
int main()
{
	printf("\t\t\t\t\tSUM OF SERIES 1+1/4+1/8..1/400\n\n\n");
	double sum=0.0;
	int den=1;
	
	while(den<=400)
	{
		sum=sum+(1.0/den);
		if(den==1)
		{
			den=4;
		}
		else
		{
			den=den+4;
		}
	}
	printf("Sum of series: %0.6lf",sum);//use double format specifier lf
	return 0;
}
