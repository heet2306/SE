//WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
	 
	char str[50];
	int count,len;
	
	
	printf("Enter a string to reverse it:");
	gets(str);
	printf("\nReverse string is: %s\n",strrev(str));
	
//	find string length
	len = strlen(str);
//	loop to devide string
	for(int i=0;i<len/2;i++)
	{
		if(str[i] == str[len-i-1])
		{
			count = 1;
		}
	}
//	 condition to check Palindrome or not Palindrome
	if(count)
	{
		printf("%s is  Palindrome\n",str);
	}
	else
	{
		printf("%s is  not hPalindrome",str);
	}
	return 0;
}
