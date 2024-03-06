//Write a program in C to copy one string to another string.
#include <stdio.h>
#include<string.h>
int main()
{
	char string[50],copystr[50];
	
	//user inputs string
	printf("Enter a string:");
	//gets read a string
	gets(string);
	
	//strcpy is function of string
	strcpy(copystr,string); 
	//print copyed string 
	printf("copyed string is:%s",copystr);    
	
	
	return 0;
}






