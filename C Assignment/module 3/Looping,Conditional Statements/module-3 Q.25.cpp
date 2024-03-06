//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

//	1+4+9+16+25

#include<stdio.h>



int main()
{
    int i,num,sum=0;
    //user input
    printf("Enter a number:");
    //read input
    scanf("%d",&num);
    //loop for multiplying numbers
    for(i=1;i<=num;i++)
    {
        sum+=i*i;
    }
    //display
    printf("Sum: %d",sum);
    return 0;
}
