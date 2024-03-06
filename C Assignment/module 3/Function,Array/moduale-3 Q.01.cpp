//Write a program to find out the max number from given array using function

#include<stdio.h>

int Max(int arr[])
{
	int i,max=0,temp;
	
	printf("\n================Array=================\n");
	//loop to show input in array
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		
		//condition: find the max of elements
		if(arr[i] > max)
		{
			temp = arr[i];
			arr[i]=max;
			max=temp;
		}
		
		
	}
		
	printf("max : %d",max);
}

int main()
{
	int arr[5];
	int i;	
	
	//loop to take input in array
	for(i=0;i<5;i++)
	{
		printf("Enter element : ");
		scanf("%d",&arr[i]);	
	}
	
	//function call	
	Max(arr);
	
	
	
	return 0;
}
