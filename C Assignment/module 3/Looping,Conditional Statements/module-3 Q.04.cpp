//WAP to print table up to given numbers

#include<stdio.h>
int main()
{
	int i,num;
	
	//input for table
	printf("Enter a number:");
	scanf("%d",&num);
	
	//loop: multiplay the number by i to display table
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",num,i,i*num);
	}
	return 0;
}
