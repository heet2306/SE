//WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() 
{
    int num,num1 = 0,num2 = 1,nextNumber;
    

    printf("Enter the value for Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");

    for (int i = 1; i <= num; i++) 
	{
        if (i == 1) 
		{
            printf("%d ", num1);
        } 
		else if (i == 2) 
		{
            printf("%d ", num2);
        } 
		else 
		{
            nextNumber = num1 + num2;
            num1 = num2;
            num2 = nextNumber;
            printf("%d ", nextNumber);
        }
    }

    return 0;
}
