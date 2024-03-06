//Patterns: 1
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

#include<stdio.h>

int main()
{
	int i,j;
	
	//outer for loop to print row 
	for (i=1;i<=5;i++)
	{
		//inner loop to print 1 or 0
		for(j=1;j<=i;j++)
		{
			if(j %2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		
		printf("\n");
	}
	
	
	return 0;
}
