//Calculate sum of 10 numbers using of while loop

#include<stdio.h>

int main()
{
	int i=1,num,sum=0;
	
	//while loop: for input 10 time
	while(i<=10)
	{
		printf("%d Enter num:",i);
		scanf("%d",&num);
		i++;
		//sum of all numbers
		sum +=num;
	}
	
	printf("sum of numbers are =%d",sum);
	return 0;
}
