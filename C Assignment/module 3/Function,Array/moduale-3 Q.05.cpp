//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice

#include<stdio.h>

//on choice shorting ascending or descending
//function create
int shorting(int choice)
{
	int i,j;
	int arr[5],temp;
	
	//choice is 1 this if  will work
	if(choice ==1)
	{
		//loop to eneter 5 Elements in array
		for(i=0;i<5;i++)
		{
			printf("Enter array Elements:",i);
			scanf("%d",&arr[i]);
		}
		//loop for row 
		for(i=0;i<5;i++)
		{
			
			for(j=i+1;j<5;j++)
			{
				if(arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
		//loop to printf shorted array		
		for(i=0;i<5;i++)
		{
			printf("%d:",arr[i]);
		}
	}
	
	//if choice is 2 this if will work
	else if(choice ==2)
	{
		for(i=0;i<5;i++)
		{
			printf("Enter array Elements:",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
			
		//loop to printf shorted array		
		for(i=0;i<5;i++)
		{
			printf("%d:",arr[i]);
		}
	}
	
	//while choice is not from choice board
	else
	{
		printf("Invalid!!! choice");
	}
	
}

int main()
{
	int choice;
	
	//choice board
	printf("=========Choice board=======\n");
	printf("1.Ascending\n");
	printf("2.Descending\n");
	

	printf("Enter your choice from Choice board:\n");
	scanf("%d",&choice);
	
	//function calling
	shorting(choice);

	return 0;
}
