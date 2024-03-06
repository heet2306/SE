//Accept 5 employees name and salary and count average and total salary


#include<stdio.h>

int main() 
{
    char name1[20],name2[20],name3[20],name4[20],name5[20];
    int salary1,salary2,salary3,salary4,salary5;
    float totalSalary = 0.0, averageSalary;

    // Input for employee 1
    printf("Enter name for employee 1: ");
    scanf("%s", &name1);

    printf("Enter salary for employee 1: ");
    scanf("%d", &salary1);


    // Input for employee 2
    printf("Enter name for employee 2: ");
    scanf("%s", &name2);

    printf("Enter salary for employee 2: ");
    scanf("%d", &salary2);


    // Input for employee 3
    printf("Enter name for employee 3: ");
    scanf("%s", &name3);

    printf("Enter salary for employee 3: ");
    scanf("%d", &salary3);


    // Input for employee 4
    printf("Enter name for employee 4: ");
    scanf("%s", &name4);

    printf("Enter salary for employee 4: ");
    scanf("%d", &salary4);


    // Input for employee 5
    printf("Enter name for employee 5: ");
    scanf("%s", &name5);

    printf("Enter salary for employee 5: ");
    scanf("%d", &salary5);

    totalSalary = salary1 + salary2 + salary3 + salary4 + salary5;

    // Calculate average salary
    averageSalary = totalSalary / 5;

    printf("\nEmployee Details:\n");
    printf("Employee 1 Name: %s, Salary: %d\n", name1, salary1);
    printf("Employee 2 Name: %s, Salary: %d\n", name2, salary2);
    printf("Employee 3 Name: %s, Salary: %d\n", name3, salary3);
    printf("Employee 4 Name: %s, Salary: %d\n", name4, salary4);
    printf("Employee 5 Name: %s, Salary: %d\n", name5, salary5);

    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

