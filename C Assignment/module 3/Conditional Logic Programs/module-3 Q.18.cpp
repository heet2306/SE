//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>

int main()
{
	int costprice,sellingprice,profitloss;
	
	printf("Enter the cost price:");
	scanf("%d",&costprice);
	
	printf("Enter the selling price:");
	scanf("%d",&sellingprice);
	
	//finding profit or loss
	profitloss = sellingprice - costprice;
	
	
	//condition: to find profit or loss
	if(profitloss > 0)
	{
		printf("Profit: %d\n", profitloss);
	}
	else
	{
		printf("Loss: %d\n", profitloss);
	}
	
	return 0;
}
