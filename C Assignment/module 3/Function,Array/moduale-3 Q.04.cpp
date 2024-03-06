//WAP to find factorial using recursion 

#include<stdio.h>
int fact(int);

int main()
{
  int n;
  printf("enter a number to find factorial: ");
  scanf("%d",&n);
  //function call
  n=fact(n);
  
  printf("\nFactorial : %d ",n);
  return 0;
}

//function create
int fact(int x)
{
  if(x==1)
    return(x);
  else
  //recursion
   x=x*fact(x-1);
}
