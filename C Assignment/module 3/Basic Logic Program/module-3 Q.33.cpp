//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>

int main()
{
	int num, power1, power2, power3;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the powers
    power1 = num;
    power2 = num * num;
    power3 = num * num * num;

    printf("First Power (N^1): %d\n", power1);
    printf("Second Power (N^2): %d\n", power2);
    printf("Third Power (N^3): %d\n", power3);
    
	return 0;
}
