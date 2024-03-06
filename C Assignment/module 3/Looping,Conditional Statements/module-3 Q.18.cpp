//Write a C Program to Print the Multiplication Table of N

#include<stdio.h>

int main()
{
	int i=1,num;
	
	printf("Enetr a number to Print the Multiplication Table:",i);
	scanf("%d",&num);
	
	//while loop: to print table number 1 to 10
	while(i<=10)
	{
		//print table 
		printf("%d * %d = %d\n",num,i,num*i);
		i++;
	}
	return 0;
}
