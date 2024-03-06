//Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include <string.h>

int main()
{
	char str[40];
	int words=1;
	
	//user inputs string
	printf("Enter a string to count words:");
	gets(str);
	
	
	//loop to count the total number of words in a string
	for(int i=0;str[i] !='\0';i++)
	{
		//check the white space and seprate the word
		if(str[i] == ' ')
		{
			words++;
		}
	}
	//print the number of word in string
	printf("The total number of words in the string is %d.", words);
	
	return 0;
}
