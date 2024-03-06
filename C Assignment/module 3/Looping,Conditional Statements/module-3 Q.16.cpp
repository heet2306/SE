//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>

int main()
{
	int i=0,num,sum=0;
	
	printf("Enter a number to Calculate the Sum of Natural Numbers:");
	scanf("%d",&num);
	
	//while loop: loop to grater/or equal to number enter
	while(i<=num)
	{
		//find natural number
		sum = sum + i;
		i++;
	}
	
	 printf(" \n Sum of first %d natural number is : %d", num, sum);  
	return 0;
}
