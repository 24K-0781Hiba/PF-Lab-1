#include<stdio.h>
void main()
{
  int n, count = 0;
  printf("Enter a number: ");
  scanf("%d",&n);
  if (n<0)
  {
    n=-n;
  }
  do{
  n = n/10;
  count++;
  }while(n!=0);
  if(count>1)
  {
    printf("The number is a %d(multiple) digit number",count);
  }
  else {
  printf("The number is a single digit number");
  }
  return 0;
}










