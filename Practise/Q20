#include <stdio.h>
int ispal(char word[], int size);
int main() 
{
	char word[20];
	int result;
	result=ispal(word,20);
	if (result==1)
	{
		printf("word is a palindrome");
	}
	else
	{
		printf("word is not a palindrome");
	}
	return 0;
}
int ispal(char word[], int size)
{
	printf("Enter a word: ");
	scanf("%s", word);
	int i=0,j;
	int ispalindrome=1;
	while(word[i]!='\0')
	{
		i++; //len of word manually
	}
	
	i =i -1;
	
	for(j=0;j<i;j++)
	{
		if (word[j]!=word[i])
		{
			ispalindrome=0;
			break;
		}
		else
		{
			i--;
		}
	}
	
	return ispalindrome;
}
	
