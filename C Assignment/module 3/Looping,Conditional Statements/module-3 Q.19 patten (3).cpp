//Patterns:3
//
//         *
//       * * *
//     * * * * *
//	 * * * * * * *
//  * * * * * * * * 

#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0;i<5;i++)
	{
		// inner loop 1 to print white spaces 
		for(j=0;j < 2 * (5 - i) - 1;j++)
		{
			printf(" ");
		}
		
		// inner loop 2 to print *
		for (k = 0; k < 2 * i + 1; k++) 
		{ 
            printf("* "); 
        } 
		
		printf("\n");
	}
	return 0;
}
	  
