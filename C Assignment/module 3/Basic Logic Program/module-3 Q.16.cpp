//Convert country’s name in abbreviate form

#include<stdio.h>

int main()
{
	char countryname[50],abbreviate[3];
	
	printf("Enter country name: ");
	scanf("%s",&countryname);
	
	// Convert in abbreviation
	abbreviate[0] = countryname[0];
	abbreviate[1] = countryname[1];
	abbreviate[2] = countryname[2];
	abbreviate[3] = '\0'; // Null-terminate the abbreviation
	
	printf("Abbreviated Country Name: %s\n" ,abbreviate);
	
	return 0;
}
