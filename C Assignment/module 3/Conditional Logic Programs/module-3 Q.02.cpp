//Write a C program to read the value of an integer m and display the value of
//n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include <stdio.h>

int main() {
    int m, n;

    // Read the value of m
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Determine the value of n based on the conditions
    if (m > 0) 
	{
        n = 1;
    } 
	else if (m == 0) 
	{
        n = 0;
    } 
	else 
	{
        n = -1;
    }

    // Display the value of n
    printf("The value of n is: %d\n", n);

    return 0;
}

