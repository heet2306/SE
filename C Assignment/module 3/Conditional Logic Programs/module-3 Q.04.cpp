//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main()
{	 
	int choice,num1,num2,result;
	
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    
    //choice of use store
    printf("choose which operation you want to perform:");
    scanf("%d", &choice);

    
    
    //on the choice of user Conditional operation will perform 
    if(choice==1)
    {
    	printf("Enter first number: ");
    	scanf("%d", &num1);
    	printf("Enter second number: ");
    	scanf("%d", &num2);
    	
    	result = num1+num2;
    	printf("Addition of %d + %d = %d",num1,num2,result);
	}
    
    else if(choice==2)
    {
    	printf("Enter first number: ");
    	scanf("%d", &num1);
    	printf("Enter second number: ");
    	scanf("%d", &num2);
    	
    	result = num1-num2;
    	printf("Subtraction of %d - %d = %d",num1,num2,result);
	}
	
	else if(choice==3)
    {
    	printf("Enter first number: ");
    	scanf("%d", &num1);
    	printf("Enter second number: ");
    	scanf("%d", &num2);
    	
    	result = num1*num2;
    	printf("Multiplication of %d * %d = %d",num1,num2,result);
	}
	
	else if(choice==4)
    {
    	printf("Enter first number: ");
    	scanf("%d", &num1);
    	printf("Enter second number: ");
    	scanf("%d", &num2);
    	if(num2 != 0)
    	{
    		result = num1/num2;
    		printf("Division of %d / %d = %d",num1,num2,result);
    	}
    	else
    	{
    		printf("Error: Division by zero is not allowed.\n");
		}
	}    
	
	else if(choice==5)
    {
    	printf("Enter first number: ");
    	scanf("%d", &num1);
    	printf("Enter second number: ");
    	scanf("%d", &num2);
    	if(num2 != 0)
    	{
    		result = num1/num2;
    		printf("Modulo of %d %% %d = %d",num1,num2,result);
    	}
    	else
    	{
    		printf("Error: Modulo by zero is not allowed.\n");
		}
	}   
	
	else
	{
		printf("Invalid choice!!!");
	}     
	return 0;
}
