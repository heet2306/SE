//Convert years into days and months

#include<stdio.h>

int main()
{
	int day,year,month,day_in_year = 365;
	float day_in_month = 30.44;
	
	
	printf("Enter the number year: ");
	scanf("%d",&year);
	
	// Converting years to months and days
	month = year * 12;
	day = year*day_in_year;
	
	printf("%d years is equal to %d months and %d days.\n", year, month, day);
	return 0;
}
