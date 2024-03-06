//WAP to perform Palindrome number using for loop and function

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number using a for loop
    for (; num > 0; num /= 10) 
	{
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    // Check if the reversed number is equal to the original number
    return (originalNum == reversedNum);
}

int main() 
{
    int number;

    // Read a number from the user
    printf("Enter a number to perform Palindrome: ");
    scanf("%d", &number);

    // Check if the number is palindrome using the isPalindrome function
    if (isPalindrome(number)) 
	{
        printf("%d is a palindrome.\n", number);
    }
	else 
	{
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

