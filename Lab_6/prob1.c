#include<stdio.h>
int main()
{
  int num, sum = 0;
  do{
  printf("Enter a number: ");
  scanf("%d",&num);
  sum = sum + num;
  printf("The sum of numbers is: %d\n",sum);
  }while(num!=0);
  return 0;
}
