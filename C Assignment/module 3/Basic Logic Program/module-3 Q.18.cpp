//Calculate person’s Annual salary

#include<stdio.h>

int main()
{
	
	int monthlysalary,annualsalary;
	
	printf("Enter the monthly salary of Emolpyee: ");
	scanf("%d",&monthlysalary);
	
	//calculattion of annual salary
	annualsalary = 12*monthlysalary;
	
    printf("The annual salary is: %d\n", annualsalary);
}
