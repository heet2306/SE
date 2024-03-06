//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.

#include<stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int alphabets=0,digits=0,special=0;
	
	//user inputs string
	printf("Enter the string to find the total number of alphabets, digits and special characters :");
	gets(str);
	
	//loop to find end of string
	for(int i=0;str[i] !='\0';i++)
	{
		//check number of alphabets in string
		if((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			alphabets++;
		}
		//check number of digits in string
		else if(str[i] >= '0' && str[i] <='9')
		{
			digits++;
		}
		//check number of white_space in string
		else if(str[i] != ' ' )
		{
			special++;
		}		
	}
	//print the number of alphabets in string
	printf("number of alphabets in string:%d\n",alphabets);
	//print the number of digits in string
	printf("number of digits in string:%d\n",digits);
	//print the number of special characters in string
	printf("number of special characters in string:%d\n",special);

	return 0;
}
