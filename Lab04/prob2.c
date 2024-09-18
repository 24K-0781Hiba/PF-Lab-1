#include<stdio.h>
int main()
{
  int num1, num2;
  float ans;
  char opr;
  printf("enter 1st number: ");
  scanf("%d",&num1);
  printf("enter 2nd number: ");
  scanf("%d",&num2);
  printf("enter operator: ");
  scanf(" %c",&opr);
  switch (opr)
  {
    case '+':
    ans = num1+num2;
    printf("your answer is: %.1f",ans);
    break;
    case '-':
    ans = num1-num2;
    printf("your answer is: %.1f",ans);
    break;
    case '*':
    ans = num1*num2;
    printf("your answer is: %.1f",ans);
    break;
    case '/':
    ans = num1/num2;
    printf("your answer is: %.1f",ans);
    break;
    default:
    printf("invalid operator");
  }
  return 0;
}
