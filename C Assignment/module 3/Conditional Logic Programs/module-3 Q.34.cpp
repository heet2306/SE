//Accept month number and display month name

#include<stdio.h>

int main()
{
	int month;
	
	printf("Enter number of month:");
	scanf("%d",&month);
	
	//condition: Check if the entered month number is valid
	if(month >=1 && month <= 12)
	{
		//switch case: Determine the month name based on the month number
		switch(month)
		{
			case 1:
				printf("January");
				break;
			case 2:
				printf("February");
				break;
			case 3:
				printf("March");
				break;
			case 4:
				printf("April");
				break;
			case 5:
				printf("May");
				break;
			case 6:
				printf("June");
				break;
			case 7:
				printf("July");
				break;
			case 8:
				printf("August");
				break;
			case 9:
				printf("September");
				break;
			case 10:
				printf("October");
				break;
			case 11:
				printf("November");
				break;
			case 12:
				printf("December");
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
