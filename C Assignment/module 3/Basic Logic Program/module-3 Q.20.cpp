//Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.


#include<stdio.h>

int main()
{
	// 10% insurance premium  10% loan installment
	float insurancePercentage = 0.10, loanPercentage = 0.10,insurance_premium,loan_installment,remaining_salary;
	int salary;
	
	
	printf("Enter he monthly salary: ");
	scanf("%d",&salary);
	
	insurance_premium = salary * insurancePercentage;
	loan_installment = salary * loanPercentage;
	
	remaining_salary = salary - insurance_premium - loan_installment;
	
	printf("Monthly Salary = %d\n",salary);
	printf("Insurance Premium = %.4f\n",insurance_premium);
	printf("Loan Installment = %.4f\n",loan_installment);
	printf("Remaining Salary = %.4f\n",remaining_salary);
	
	
	return 0;
}
