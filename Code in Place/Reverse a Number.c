#include <stdio.h>
int main()
{
    int  i, j,dig,num,reversed=0;
    printf("\n\t\t\t\t\tReverse a Number!!\n\n");
    printf("Enter number: ");
    scanf("%d", &num);
    printf("The original number is: %d\n",num);
    while(num!=0)
    {
    	dig=num%10;//extract last digit
    	reversed=reversed*10+dig;//add it to new number
    	num=num/10;//remove last digit from org number
	}
	printf("The reversed number is: %d",reversed);
	return 0;
}


