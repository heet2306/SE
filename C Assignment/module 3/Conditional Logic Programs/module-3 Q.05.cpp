//Check Number Is Positive or Negative

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter any number to Positive or Negative:");
	scanf("%d",&num);
	
	//condition : check the num is positive or negative
	if (num > 0) 
	{
        printf("The number is positive.\n");
    } 
	else if (num < 0) 
	{
        printf("The number is negative.\n");
    } 
	else 
	{
        printf("The number is zero.\n");
    }
	return 0;
}
