//Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and above but less than 800 27. @1.80
//28. 800 and above 29. @2.00


#include <stdio.h>

int main() {
    // Declare variables to store customer details and unit consumed
    int customerID;
    char customerName[50];
    float unit, totalAmount;

    // Input customer details and unit  from the user
    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf("%s", &customerName);

    printf("Enter unit consumed: ");
    scanf("%f", &unit);

    // Calculate the total amount based on the charging criteria
    if (unit <= 350) 
	{
        totalAmount = unit * 1.20;
    } 
	else if (unit <= 600) 
	{
        totalAmount = unit * 1.50;
    } 
	else if (unit <= 800) 
	{
        totalAmount = unit  * 1.80;
    } 
	else 
	{
        totalAmount = unit * 2.00;
    }

    // Display the electricity bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unit);
    printf("Total Amount to be Paid: Rs. %.2f\n", totalAmount);

    return 0;
}

