////Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main()
{
	int salary,hra,da,gross_salary;
	
	printf("Enter your salary:");
	scanf("%d",&salary);
	
	//condtion: to give HRA and DA on salary
	if(salary <= 10000)
	{
		hra = 0.20 * salary;
		da = 0.80 * salary;
	}
	else if(salary <= 20000)
	{
		hra = 0.25 * salary;
		da = 0.90 * salary;	
	}
	else
	{
		hra = 0.30 * salary;
		da = 0.95 * salary;
	}
	
	//gross salary calculate 
	gross_salary = salary + hra + da;
	
	//detail
    printf("HRA: %d\n", hra);
    printf("DA: %d\n", da);
    printf("Gross Salary: %d\n", gross_salary);
	return 0;
}



