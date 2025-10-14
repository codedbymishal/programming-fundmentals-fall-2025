#include<stdio.h>
int main()
{
	int testInteger=3000000000;
	printf("Number is %d",testInteger);
	// In C, an int datatype usually stores values up to 2,147,483,647 
    //but since 3,000,000,000,is larger than the max limit of int
	//it causes integer overflow
	//the actual output will be an incorrect negative number not what we wanted to store
}
