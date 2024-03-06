//WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main() 
{
	int num;
    printf("Enter any number to check even or odd:");
    scanf("%d",&num);
    
    //condition using ternary operater: even or odd
    
    (num % 2==0)?(printf("Even number: %d\n", num)):(printf("Odd number: %d\n", num));

	

    return 0;
}
