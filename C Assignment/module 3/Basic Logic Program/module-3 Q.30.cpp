//WAP to convert years into days and days into years

#include <stdio.h>

int main()
{

    int years, days;
    const int DAYS_IN_YEAR = 365;

    // Accept the number of years from the user
    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Convert years to days
    days = years * DAYS_IN_YEAR;

    printf("%d years is equal to %d days.\n", years, days);

    // Accept the number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Convert days to years
    years = days / DAYS_IN_YEAR;

    printf("%d days is equal to %d years.\n", days, years);

    return 0;
}

