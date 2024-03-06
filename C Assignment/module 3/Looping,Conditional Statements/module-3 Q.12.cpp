//Program of Armstrong Number in C Using For Loop & While Loop


#include <stdio.h>

int main()
{
	int num,sum,r,temp;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	temp = num;
	
	while(num > 0)
	{
		r=num%10;    
		sum=sum+(r*r*r);    
		num=num/10;    
		
	}
	
	if(temp == sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("Not armstrong number");
	}
	
	return 0;
}


