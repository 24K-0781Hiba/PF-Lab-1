#include<stdio.h>
void main( )
{
  int num;
  float ans;
  printf("enter a number: ");
  scanf("%d",&num);
  ans = num%3;
  if (ans==0)
  {
   printf("the number is divisible by 3");
  }
  else
  printf("the number is not divisible by 3");
}
