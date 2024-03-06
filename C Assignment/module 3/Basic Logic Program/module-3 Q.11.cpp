// Find circumference of square formula : C = 4 * a

#include<stdio.h>

float circumference,a;
int main()
{
	//Input:  lenght of square
	printf("Enter the length of the square:");
	// Read the input from the user
	scanf("%f",&a);
	
	//formula to Find circumference of square
	circumference = 4*a;
	printf("The circumference of the square is %.2f",circumference);
	
	return 0;
}
