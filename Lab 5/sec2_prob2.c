#include<stdio.h>
int main()
{
  int age;
  char nty;
  printf("enter your age: ");
  scanf("%d",&age);
  printf("enter your nationality or citizenship: ");
  scanf(" %c",&nty);
  if (age>=18&&nty=='p'||nty=='P')
  {
    printf("yoy are elligible to vote");
  }
  else{
  printf("you are not elligibe to vote");
  }
  return 0;
}
