//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
	//virable
	int i,num=0;
	
	//for loop: for 5 row 
	for(i=1;i<=5;i++)
	{
		printf("%d Enter number:",i);
		
		scanf("%d",&num);
		//print the enter numbers
		printf("%d\n",num);
	}

	return 0;
}
