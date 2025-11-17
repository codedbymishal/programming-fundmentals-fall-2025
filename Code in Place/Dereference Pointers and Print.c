#include<stdio.h>
int main()
{
	int inum;
	float fnum;
	char character;
	
	//take input
	printf("Enter an integer, a float and a character: \n");
	scanf("%d  %f  %c", &inum, &fnum, &character);
	
	//pointers
	int *iptr = &inum;
	float *fptr = &fnum;
	char *cptr = &character;
	
	//dereference and print
	printf("The value of integer is: %d\n",*iptr);
	printf("The value of float is: %0.2f\n",*fptr);
	printf("The value of character is: %c\n",*cptr);
	
	return 0;	
}
