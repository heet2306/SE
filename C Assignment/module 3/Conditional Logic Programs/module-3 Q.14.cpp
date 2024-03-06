//WAP to find the largest of three numbers.

#include<stdio.h>
int main()
{
	int num1, num2, num3;
	
	printf("Enter three number to find the largest: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	//condition: which numberis grater 
	if (num1 >= num2 && num1 >= num3)
	{
        printf("The largest number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The largest number is: %d\n", num2);
    }
    else
    {
        printf("The largest number is: %d\n", num3);
    }
	return 0;
}

