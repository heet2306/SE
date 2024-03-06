//WAP to input the week number and print week day.


#include <stdio.h>

int main() {
    // Declare variable to store week number
    int weekNumber;
    char weekDay;

    // Input week number from the user
    printf("Enter the week number: ");
    scanf("%d", &weekNumber);

    //condition: Check if the entered week number is valid
    if (weekNumber >= 1 && weekNumber <= 7) 
	
	{
        //switch case: Determine the week day based on the week number
        switch (weekNumber) 
		{
            case 1:
                printf("sunday");
                break;
            case 2:
                printf("Monday");
                break;
            case 3:
                printf("Tuesday");
                break;
            case 4:
                printf("Wednesday");
                break;
            case 5:
                printf("Thursday");
                break;
            case 6:
                printf("Friday");
                break;
            case 7:
                printf("Saturday");
                break;
            default:
                break;
        }
    } 
	else 
	{
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}

