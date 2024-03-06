//WAP Find out length of string without using inbuilt function

#include<stdio.h>
#include<string.h> //header file for strings

int main()
{
	char str1[100];
	int len=0;
	
	printf("Enter string : ");
	
	gets(str1); // to get mutiline string input from user
	
	len=strlen(str1); // return length of string
	
	printf("Length : %d\n",len);
	
	return 0;
}
