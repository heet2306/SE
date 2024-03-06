//Write a program in C to find the length of a string without using library
//functions.


#include<stdio.h>
#include <string.h>
int main()
{
	char str[40];
	int length=0;
	
	//user inputs string
	printf("Enter a string to find the length of a string:");
	//gets read a string
	gets(str);
	
	//loop to count the length of string
	for(int i=0;str[i] !='\0';i++)
	{
		length++;
	}
	
	//print the lenght of string
	printf("The length of a string is: %d",length);
	return 0;
}
