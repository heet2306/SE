//Convert kilometers into meters



#include<stdio.h>
int main()
{
	float kilometers,meters;
	float KILOMETER_TO_METER = 1000.0;
	
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Converting kilometers into  meters
    meters = kilometers * KILOMETER_TO_METER;

    // Display the result
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);
	
	
	return 0;
}
