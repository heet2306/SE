//Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

#include<stdio.h>

int main()
{
	//variables
	int num1,num2,result;
	
	//two number input from user 
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("\nEnter second number:");
	scanf("%d",&num2);
	
	//addition will done on num1 and num2 and result will didplay ans
	result=num1+num2;
	printf("addition =%d \n",result);
	
	//subtraction will done on num1 and num2 and result will didplay ans
	result=num1-num2;
	printf("subtraction =%d \n",result);
	
	//multiplication will done on num1 and num2 and result will didplay ans
	result=num1*num2;
	printf("multiplication =%d \n",result);
	
	//division will done on num1 and num2 and result will didplay ans
	result=num1/num2;
	printf("division =%d \n",result);
	
	//modulo will found on num1 and num2 and result will didplay ans
	result=num1%num2;
	printf("modulo =%d \n",result);
	
	
	return 0;
}

