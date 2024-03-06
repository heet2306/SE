//Write a C program to check whether a triangle can be formed with the given
//values for the angles.

# include<stdio.h>

int main()
{
	int num1,num2,num3;
	
	printf("Enter the first angle of triangle:");
	scanf("%d",&num1);
	
	printf("Enter the second angle of triangle:");
	scanf("%d",&num2);
	
	printf("Enter the third angle of triangle:");
	scanf("%d",&num3);
	
	
	//condition: for triangle will create or not
	if(num1 + num2 + num3 == 180)
	{
		printf("A triangle can  formed with the given value.");
	}
	else
	{
		printf("A triangle can not formed with the given value.");
	}
	return 0;
}
