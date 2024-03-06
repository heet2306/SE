//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main()
{
	int i,num,sum=0;
	
	//for loop: Enter number & it's sum
	for(i=1;i<=5;i++)
	{
		printf("Enter number to make a summation:",i);
		scanf("%d",&num);
		sum +=num;
	}
	printf("summation of given number is: %d",sum);
	return 0;
}
