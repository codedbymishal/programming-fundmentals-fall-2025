#include <stdio.h>
//In C, parameter names in the prototype, definition, and call can all be different 
// what matters is the order and type of the parameters, not the names.

void displayinstructions();
void takeinput(int *num1, int *num2); // or use void takeinput(int*, int*)
int sum(int, int); // function prototype (only types, no parameter names)

int main() 
{
	printf("Calling function displayinstructions:\n");
	instructions();
	printf("Calling function takeinput:\n");
	int a,b,result;//cant use sum for variable name here
    takeinput(&a,&b);
    printf("Calling function sum:\n");
    result=sum(a,b);
    printf("The sum is %d",result);
    return 0;
}

void instructions()
{
	printf("This program sums two number!\n");
	printf("You will be asked to enter two integers!\n");
}
void takeinput(int *a, int *b) //recieves addresses of variables
{
	printf("Enter 2 numbers: \n");
	scanf("%d %d",a,b); //save input at addresses 
}
int sum(int x, int y) // function definition
{
    return x + y;
}

