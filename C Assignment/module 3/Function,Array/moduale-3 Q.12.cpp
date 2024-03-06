//WAP to accept 5 students name and store it in array

#include<stdio.h>

int main()
{
	char str[5][20];
	
	
	
	//loop for input 
	for(int i=0;i<5;i++)
	{
		printf("Enter Students Name : ");
		scanf("%s",&str[i]);
	}
	printf("\n");
	
	//loop to print name
	for(int i=0;i<5;i++)
	{
		printf("Names are : %s\n",str[i]);
	}
	
	return 0;
}


