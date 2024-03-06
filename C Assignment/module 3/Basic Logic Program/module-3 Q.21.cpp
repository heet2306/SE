//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>

int main()
{
	int num1,num2,temp;
	
	printf("Enter num1 number: ");
	scanf("%d",&num1);
	
	printf("Enter num2 number: ");
	scanf("%d",&num2);
	
	// Swap using a third variable
	printf("\nSwapping using a third variable\n");
	//Before swap number are
	printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	//After swap number are
	printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
	
	
	
	// Swap without using a third variable
	
	printf("\nSwapping without using a third variable\n");
	
	printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

	
	num1 = num1 + num2; //7
	num2 = num1 - num2; //2
	num1 = num1 - num2; //5
	
	printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
