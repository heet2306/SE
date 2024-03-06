//Convert days into months

#include<stdio.h>
int main()
{
	int day; 
	float month;
	
	printf("Enthe the days: ");
	scanf("%d",&day);
	
	// Convert days to months (using the average of 30.44 days per month)
	month = day /30.44;
	printf("%d days is approximately %.3f months.\n", day, month);
	return 0;
}
