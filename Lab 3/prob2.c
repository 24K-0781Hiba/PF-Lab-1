#include<stdio.h>
int main()
{
  int a, b, c;
  printf("enter 1st number: ");
  scanf("%d",&a);
  printf("enter 2nd number: ");
  scanf("%d%",&b);
  c = a;
  a = b;
  b = c;
  printf("the new value of 1st number is: %d",a);
  printf("\nthe new value of 2nd number is: %d",b);
  return 0;
}