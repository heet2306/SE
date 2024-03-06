//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
//82746


#include <stdio.h>

int main() 
{

  int num, reverse = 0, remainder;

  printf("Enter an integer to reverse it: ");
  scanf("%d", &num);

  while (num != 0) 
  {
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
