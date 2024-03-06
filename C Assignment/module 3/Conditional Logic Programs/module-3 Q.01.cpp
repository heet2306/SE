//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter First number:");
	scanf("%d",&num1);
	
	printf("Enter second number:");
	scanf("%d",&num2);
	
	//condition : checking the number is equal or not
	if(num1==num2)
	{
		printf("They are equal");
	}
	else
	{
		printf("They Not equal");
	}
	return 0;
}
