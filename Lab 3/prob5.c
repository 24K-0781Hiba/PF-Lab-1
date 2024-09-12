
#include<stdio.h>
int main()
{
  int amnt;
  float time, rate, interest;
  printf("enter principle amount: ");
  scanf("%d",&amnt);
  if (amnt>=100&&amnt<=1000)
  {
    printf("enter rate of interest: ");
    scanf("%f",&rate);
    if (rate>=5&&rate<=10)
    {
      printf("enter time duration: ");
      scanf("%f",&time);
      if (time>=1&&time<=10)
      {
        interest = (amnt*rate*time)/100;
        printf("interest to be paid is: $%.1f",interest);
      }
      else
      {
        printf("invalid time input!");
      }}
    else
    {
      printf("invalid rate input!");
    }}
  else 
  {
    printf("invalid amount entered!");
  }
  return 0;
}


  