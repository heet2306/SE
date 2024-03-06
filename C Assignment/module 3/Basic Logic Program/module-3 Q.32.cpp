//Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main()
{
	int num1,num2,sum;
	
	printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    
	// Calculate
	sum = num1 + num2;
	
	printf("Sum of %d and %d is: %d\n",num1,num2,sum);
	
	// Check the size of the sum
    printf("Size of the sum (in bytes): %d\n", sizeof(sum));	
	
	return 0;
}

