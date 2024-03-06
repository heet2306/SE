//Write a program in C to read any Month Number in integer and display the
//number of days for this month.

#include <stdio.h>

int main() 
{
    int monthNumber,daysInMonth;
    //int daysInMonth;

    printf("Enter the month number: ");
    scanf("%d", &monthNumber);

    // Check if the entered month number is valid
    if (monthNumber >= 1 && monthNumber <= 12) {
        // Determine the number of days based on the month number
        

        switch (monthNumber) 
		{
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("31 days in month.");
                break;
            case 4: case 6: case 9: case 11:
                printf("30 days in month.");
                break;
            case 2:
                printf("28 days in month."); // Assuming a non-leap year
                break;
            default:
                break;
        }
    } 
	else 
	{
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

