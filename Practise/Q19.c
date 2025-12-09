#include<stdio.h>
void countvowels(char word[],int size);

int main()
{
	char str[20];
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	countvowels(str,20);
	return 0;
}
void countvowels(char word[],int size)
{
	int i=0,j,count=0;
	
	while(word[i]!='\0')
	{
		i++; // actual number of chars in word
    }
    
    for (j=0;j<i;j++)
    {
    	if (word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'||
    	   word[j]=='A'||word[j]=='E'||word[j]=='I'||word[j]=='O'||word[j]=='U')
    	   count ++;
	}
	printf("number of vowels: %d",count);
}
