#include <stdio.h>
#include <string.h>
int main() 
{
    char name[200];
    char course[200];
    char alltext[1000] = "";
    int freq[26] = {0};  // for small 'a' to 'z'
    int maxcount = 0;
    char c,maxchar = ' ';
    int i,len,index;
    
    printf("Enter student's name: ");
    fgets(name, 200, stdin);// Input name in array
    name[strcspn(name, "\n")] = 0;

    printf("Enter courses (type 'done' to stop):\n");
    while (1) // keeps looping
	{
        printf("Course: ");
        fgets(course, 200, stdin); // Input courses in array
        course[strcspn(course, "\n")] = 0;

        if (strcmp(course, "done") == 0)//if both strings equal
		{
            break;//loop terminates
        }
        strcat(alltext, course); //add coursename to alltext string
        strcat(alltext, " ");//add a space
    }
    strcat(alltext, name);//add name to end of alltext string   
    len = strlen(alltext);// save length of alltext string

    
    for (i = 0; i<len; i++) // counts letters in alltext string
	{
        c = alltext[i];//saves a character
        if (c == ' ') continue;// skips spaces 

        if (c >= 'A' && c <= 'Z') 
		{
            c = c + 32; // changes uppercase letters to lowercase using ASCII values
        }

        if (c >= 'a' && c <= 'z') 
		{
            index = c - 'a';  // turning each letter into respective index of array a=>0,b=>1..z=>25
            // in C language, characters are numbers so c-a gives a number
            freq[index]++;//increments count of letter stored in index position in freq array
			// freq is array that stores count of a to z        
        }
    }

    for (i = 0; i < 26; i++) //goes thru all the letters
	{
		//maxcount holds the highest count of a letter
		//maxchar holds the letter which has the highest count
        if (freq[i] > maxcount) // if this letter appears more than maxcount times
		{
            maxcount = freq[i];//update maxcount
            maxchar = 'a' + i;//update maxchar with letter
            //eg freq[0] = 5  means 'a' appears 5 times
        }
    }

    printf("\nMaximum occurring letter: '%c' (%d times)\n", maxchar, maxcount);
    return 0;
}
