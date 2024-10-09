#include<stdio.h>
int main()
{
  int num=65536;
  int i;
  for(i=2;i<=10;i++)
  {
    printf("\n%d",num);
	num=num/i;
  }
  return 0;
|}