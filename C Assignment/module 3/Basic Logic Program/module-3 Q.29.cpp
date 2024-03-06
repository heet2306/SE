//Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
	int seconds,minites,houres;
	int second_in_minutes=60,hours_in_minutes=60;
	
	printf("Enter the number of minutes: ");
    scanf("%d", &minites);
    
    // Convert minutes to seconds and hours
    seconds = minites * second_in_minutes;
    houres = minites / hours_in_minutes;
    
    printf("%d minutes is equal to %d seconds and %d hours.\n", minites, seconds, houres);
	return 0;
}
