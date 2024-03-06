//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array
#include<stdio.h>
int main()
{
	int num1[2][2],num2[2][2],add[2][2],sub[2][2],mul[2][2];
	int i,j,k;
	
	printf("==========matrix for 1st array============\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter array elements for 1st Array:");
			scanf("%d",&num1[i][j]);
		}
		
	}
	
	printf("==========matrix for 2nd array=============\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter array elements for 2nd Array:");
			scanf("%d",&num2[i][j]);
		}
	}
	
	printf("==========2d array 1st input=============\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",num1[i][j]);
		
		}
		printf("\n");
	}
	
	printf("==========2d array 2nd input=============\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",num2[i][j]);
		
		}
		printf("\n");
	}
	
	//Sum of 2d array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[i][j] = num1[i][j] + num2[i][j];
		
		}
	}
	printf("==========SUM array display=============\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",add[i][j]);
				
		}
		printf("\n");
	}
	
	//sub of 2d array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sub[i][j] = num1[i][j] - num2[i][j];
		
		}
	}
	printf("==========SUB array display=============\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",sub[i][j]);
				
		}
		printf("\n");
	}
	
	//mul of 2d array
	for(i=0;i<2;i++)
 	{
  		for(j=0;j<2;j++)
  		{
   			for(k=0;k<2;k++)
   			{
   				mul[i][j] += num1[i][k] * num2[k][j];
			}
		}
  	}

 	printf("==========mul array display=============\n");
	for(i=0;i<2;i++)
 	{
  		for(j=0;j<2;j++)
  		{
  			printf("\t%d",mul[i][j]);
  			//printf("\n\n");
		}
		printf("\n");
 	}
	
	
	
	return 0;
}
