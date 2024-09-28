#include<stdio.h>
int main()
{
  int num;
  printf("enter a number: ");
  scanf("%d",&num);
  if (num<0)
  {
    printf("it is a negative number");
  }
  else if (num>0)
  {
    printf("it is a positive number");
    if (num%2==0)
    {
      printf("\nthe number is even");
    }
    else {
    printf("\nthe number is odd");
    }
  }
  else{
  printf("the number is zero");
  }
return 0;
}
