//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include <stdio.h>

//incomplete
int main()
{
    int i,num = 12345, sum=0, firstDigit, lastDigit;
   
	// print number
    printf("number is: %d\n",num);
	 
    
    
    // Find last digit of a number
    lastDigit = num % 10;
    //Find the first digit by dividing n by 10 until n greater then 10
    
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    
    return 0;
}
