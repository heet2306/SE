//(1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include<stdio.h>

int main()
{
    int i,j,num,sum=0;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    //loop for sum in sum
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }
    }
    printf("Sum: %d",sum);
    return 0;
}
