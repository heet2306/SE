//Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include<stdio.h>
#include<math.h>

int main()
{
	float principal,time,rate,CompoundInterest,ammount;
	
	printf("Enter the principal: ");
	scanf("%f",&principal);
	
	printf("Enter time: ");
	scanf("%f",&time);
	
	printf("Enter rate: ");
	scanf("%f",&rate);
	
	ammount = principal * pow((1 + rate/100),time);
	CompoundInterest = ammount - principal;
	
	printf("the ammount = %.3f",ammount);
	printf("the CompoundInterest =%.3f ",CompoundInterest);
	
	return 0;
}
