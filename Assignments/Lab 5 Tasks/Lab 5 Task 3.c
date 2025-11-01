#include <stdio.h>

int main() 
{
    float fscobtained,ntsobtained,fsctotal,ntstotal,fscper,ntsper;
    printf("\n\t\t\t\t\tUniversity Admission Result!!\n\n");
    printf("Enter your FSC marks: ");
    scanf("%f", &fscobtained);
    printf("Enter total FSC marks: ");
    scanf("%f", &fsctotal);

    printf("Enter your NTS marks: ");
    scanf("%f", &ntsobtained);
    printf("Enter total NTS marks: ");
    scanf("%f", &ntstotal);
    
    
    fscper = (fscobtained / fsctotal) * 100;
    ntsper = (ntsobtained / ntstotal) * 100;

 


    if (fscper > 70) //for oxford uni
	{
        if (ntsper >= 70) 
		{
            printf("Congratulations! You are eligible for Oxford University's IT Department!\n");
        }
        else if (ntsper >= 60) 
		{
            printf("Congratulations! You are eligible for Oxford University's Electronics Department!\n");
        }
        else if (ntsper >= 50) 
		{
            printf("Congratulations! You are eligible for Oxford University's Telecommunications Department!\n");
        }
        else 
		{
            printf("Sorry, your NTS marks are too low for Oxford University!:(\n");
        }
    }
    
    else if (fscper <= 70 && fscper >= 60 && ntsper >= 50) //for mit uni
	{
        printf("Congratulations! You are eligible for MIT University's IT Department!\n");
    }
    else if (fscper <= 59 && fscper >= 50 && ntsper >= 50) 
	{
        printf("Congratulations! You are eligible for MIT University's Chemical Department!\n");
    }
    else if (fscper < 50 && fscper > 40 && ntsper >= 50) 
	{
        printf("Congratulations! You are eligible for MIT University's Computer Department!\n");
    }

    else // for both unis
	{
        printf("Sorry, you are not eligible for any department at Oxford or MIT University!:(\n");
    }

    return 0;
}

