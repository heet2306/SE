//calculate the Factorial of a Given Number using while loop



#include<stdio.h>

int main()
{
	int i=1,num,fact;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	//while loop: number is i the num
	while(i<=num)
	{
		//find factorial 
		fact=fact*i;
		i++;
	}
	printf("factriol of %d is %d",num,fact);
	return 0;
}
