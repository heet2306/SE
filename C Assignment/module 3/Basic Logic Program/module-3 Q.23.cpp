//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	//swap 2 numbers with using of multiplication and division.
	printf("\nSwapping using multiplication and division\n");
	printf("before swap: num1 = %d, num2 = %d\n",num1,num2);
	num1 = num1 * num2;
	num2 = num1 / num2;
	num1 = num1 / num2;
	
	printf("After swap: num1 = %d, num2 = %d\n",num1,num2);
	
	return 0;
}
