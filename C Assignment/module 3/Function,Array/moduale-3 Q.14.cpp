//Perform 2D matrix array

#include <stdio.h>

int main() 
{
    int arr[3][3];
    int i, j;
    
	//input
    printf("Enter 9 numbers:\n");
    
    //loop for 3 row 
    for (i = 0; i < 3; i++) 
	{
		//loop for 3 colunm
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &arr[i][j]);
        }
    }

	//print 2d array
    printf("The 2D matrix array is:\n");
    //loop for 3 row 
    for (i = 0; i < 3; i++) 
	{
		//loop for 3 colunm
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

