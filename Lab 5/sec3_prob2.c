#include<stdio.h>
int main()
{
  int num;
  printf("enter a number: ");
  scanf("%d",&num);
  num==0?printf("number is zero"): num>0?printf("number is positive"):printf("number is negative");
  return 0;
}
