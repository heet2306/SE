//Calculate person’s insurance premium based on salary


#include <stdio.h>

int main() {
   
    int salary, insurancePremium;
    float premiumPercentage = 0.10; // 10% insurance premium

    printf("Enter the person's salary: ");
    scanf("%d", &salary);

    // Calculate insurance premium (assuming 10% of the salary)
    insurancePremium = salary * premiumPercentage;


    printf("The insurance premium is = %d\n", insurancePremium);

    return 0;
}

