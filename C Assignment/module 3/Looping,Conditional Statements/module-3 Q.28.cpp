//1 2 3 6 9 18 27 54...

#include<stdio.h>



int main()
{
    int a=1,b=2,i,num;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    printf("%d %d ",a, b);
    //loop sum of before number
    for(i=3;i<=num;i++)
    {
        if(i%2==1)
        {
            a=a*3;
            printf("%d ",a);
        }
        else
        {
            b=b*3;
            printf("%d ",b);
        }
    }
    return 0;
}
