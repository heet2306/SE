//Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    printf("Enter 5 numbers perform sum of array:\n");
    
    //loop to perform sum 
    for (int i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the array is %d.", sum);
    return 0;
}

