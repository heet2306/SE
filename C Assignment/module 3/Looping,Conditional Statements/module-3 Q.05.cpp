//WAP to print factorial of given number

#include<stdio.h>

int main()
{
	int i,num,fact;
	
	//user input number
	printf("Enter a number:");
	scanf("%d",&num);
	
	//for loop: finde the factor of give number
	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	
	printf("%d",fact);
	
	return 0;
}
