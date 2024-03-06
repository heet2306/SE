//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)


#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}

float div(int a, int b)
{
	return a/b;
}
int main()
{
	int choice,num1,num2;

	printf("===========Choice Board===========\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Enter your choice form choice Board:");
    scanf("%d",&choice);
    
    if(choice ==1)
    {
    	printf("Enter two numbers : ");
	    scanf("%d %d",&num1,&num2);
	    printf("Addition is : %d",add(num1,num2));
	}
	else if(choice == 2)
	{
		printf("Enter two numbers : ");
	    scanf("%d %d",&num1,&num2);
	    printf("Subtraction is : %d",sub(num1,num2));
	}
	else if(choice == 3)
	{
		printf("Enter two numbers : ");
	    scanf("%d %d",&num1,&num2);
	    printf("Multiplication is : %d",sub(num1,num2));
	}
	else if(choice == 4)
	{
		printf("Enter two numbers : ");
	    scanf("%d %d",&num1,&num2);
	    printf("Division is : %d",sub(num1,num2));
	}
	else
	{
		printf("Invalid Choice!!!!");
	}

    
    
    
	return 0;
}
