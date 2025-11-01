#include <stdio.h>
#include <math.h>//C lib that contains sqrt function to find square root

int main()
 {
    float a, b, c;
    float discriminant, root1, root2;
    
    printf("\t\t\t\t\tFinding Roots Using Quadratic Formula!\n\n");
    printf("Enter coefficients a, b, c for Quadratic Formula:\n");
    scanf("%f %f %f", &a, &b, &c);//reduced lines of code
    discriminant = (b*b) - (4*a*c);

    if (discriminant > 0 )
	{
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        
        printf("Function has 2 distinct roots: \n");
        printf("Root 1 = %0.2f\n",root1);
        printf("Root 2 = %0.2f\n",root2);     
    }
    
    else if(discriminant==0)
    {
    	root1 = (-b + sqrt(discriminant)) / (2*a);
    	printf("Function has Repeated Roots:\n");
    	printf("Root 1= Root 2= %0.2f\n",root1);
	}
	else
	{
		printf("No Real Roots!\n");// Discriminant<0
	}
	return 0;
}
        
