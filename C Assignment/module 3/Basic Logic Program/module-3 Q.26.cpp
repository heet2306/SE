//Convert temperature Fahrenheit to Celsius

#include<stdio.h>

int main()
{
	float  fahrenheit,celsius;
	// Accept temperature in Fahrenheit from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

	return 0;
}
