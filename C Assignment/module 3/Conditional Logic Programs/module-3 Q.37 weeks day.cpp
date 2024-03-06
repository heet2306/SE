//WAP to show
//i. Monday to Sunday using switch case

#include <stdio.h>

int main() 
{
    int dayNumber;

    printf("Enter the day number: ");
    scanf("%d", &dayNumber);

    // Check if the entered day number is valid
    if (dayNumber >= 1 && dayNumber <= 7) 
	{
        // Determine the day of the week based on the day number
        switch (dayNumber) 
		{
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default:
                break;
        }
    } 
	else 
	{
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}

