//WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>

int main() 
{
    int arr[5];

	//input
    printf("Enter 5 numbers:\n");
    
    //loop to read enter numbers
    for (int i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }
	
    printf("The entered numbers are:\n");

    for (int i = 0; i < 5; i++) 
	{
		//check number is even 
        if (arr[i] % 2 == 0) 
		{
            printf("%d is even.\n", arr[i]);
        } 
		else 
		{
            printf("%d is odd.\n", arr[i]);
        }
    }

    return 0;
}

