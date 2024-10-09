#include<stdio.h>
int main()
{
  int count = 0, num = 1, temp;
  int value = 2;
  while (count<90)
  {
    printf(",%d",num);
    temp = num;
    num*=value;
    value = temp;
    count++;
  }
  return 0;
}
