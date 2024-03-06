//WAP to check whether a number is negative, positive or zero.
#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter Any  number:");
	scanf("%d",&num);
	
	if(num < 0)
	{
		printf("number is negative.");
	}
	else if(num > 0)
	{
		printf("number is positive.");
	}
	else
	{
		printf("number is Zero.");
	}
	return 0;
}
