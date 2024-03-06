//Patterns: 6
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*

#include<stdio.h>

int main()
{
	
	int i,j;
	
	//outer loop to print row for upper half
	for(i=0;i<=5;i++)
	{
		//inner loop: Print a half upper *
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	//outer loop to print row lower half
	for(i=5;i>=0;i--)
	{
		//inner loop: Print a half lower *
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
