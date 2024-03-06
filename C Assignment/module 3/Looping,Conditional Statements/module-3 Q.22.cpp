//Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>
#include <string.h>

// Function create 
int isPalindrome(int num) 
{
    int reversed = 0;
    int original = num;

	//loop to reverse number
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() 
{
    int num1, num2, num3;

//	user input
    printf("Enter numbers to check palindrome or not: ");
    //read input
    scanf("%d", &num1);
    
    //	user input
    printf("Enter numbers to check palindrome or not: ");
    //read input
    scanf("%d", &num2);
    
    //	user input
    printf("Enter numbers to check palindrome or not: ");
    //read input
    scanf("%d", &num3);
    

    	//check number is palindrome or not
    	//function call
        if (isPalindrome(num1)) 
        {
            printf("%d is a palindrome\n", num1);
        } 
        
        else 
        {
            printf("%d is not a palindrome\n", num1);
        }
		//check number is palindrome or not
        if (isPalindrome(num2)) /
        {
            printf("%d is a palindrome\n", num2);
        } 
        else 
        {
            printf("%d is not a palindrome\n", num2);
        }
		//check number is palindrome or not
        if (isPalindrome(num3)) 
        {
            printf("%d is a palindrome\n", num3);
        } 
        else 
        {
            printf("%d is not a palindrome\n", num3);
        }

    return 0;
}
