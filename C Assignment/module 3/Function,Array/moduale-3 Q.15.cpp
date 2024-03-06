//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
	int j,i,num[5],temp;
	
	//loop to store array elements
	for(int i=0;i<5;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&num[i]);
	}
	
	
	//loop for row
	for(i=0;i<5;i++)
		{
			//inner loop
			for(j=i+1;j<5;j++)
			{
				//check and swap tpo ascending
				if(num[i] > num[j])
				{
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
	printf("ascending order or array elements\n");
	
	//loop to printf sort number to ascending  
	for(i=0;i<5;i++)
		{
			printf("%d:",num[i]);
		}
	return 0;
}
